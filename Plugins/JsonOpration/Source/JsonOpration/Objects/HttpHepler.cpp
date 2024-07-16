// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpHepler.h"

#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Engine.h"
#include "GenericPlatform/GenericPlatformHttp.h"
#include <string>
#include <iostream>

using namespace std;

/*void UHttpHepler::Download(const FString& URL)
{
TSharedRef<IHttpRequest> HttpReuest = FHttpModule::Get().CreateRequest();
HttpReuest->SetURL(URL);
HttpReuest->SetVerb(TEXT("GET"));
HttpReuest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
HttpReuest->OnProcessRequestComplete().BindRaw(this, &UHttpHepler::OnRequestComplete);
HttpReuest->OnRequestProgress().BindRaw(this, &UHttpHepler::OnRequestProgress);
HttpReuest->ProcessRequest();
}
void UHttpHepler::Upload(const FString& URL, const FString& ContentString)//ContentString为需要上传的文件内容，如果不是纯文本就换成TArray类型的参数
{
TSharedRef<IHttpRequest> HttpReuest = FHttpModule::Get().CreateRequest();
HttpReuest->SetURL(URL);
HttpReuest->SetVerb(TEXT("POST"));
HttpReuest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
HttpReuest->SetContentAsString(ContentString);//也可以用SetContent，只不过参数要换成TArray
HttpReuest->OnProcessRequestComplete().BindRaw(this, &UHttpHepler::OnRequestComplete);
HttpReuest->OnRequestProgress().BindRaw(this, &UHttpHepler::OnRequestProgress);
HttpReuest->ProcessRequest();
}*/

/*void UHttpHepler::GoRequest(const FString& URL)
{
TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
HttpRequest->SetURL(URL);
HttpRequest->SetVerb(TEXT("GET"));
//HttpRequest->SetContentAsString(JsonStr);
HttpRequest->OnProcessRequestComplete().BindUObject(this, &UHttpHepler::OnRequestComplete);
HttpRequest->ProcessRequest();
}*/



//请求进度
void UHttpHepler::OnRequestProgress(FHttpRequestPtr HttpRequest, int32 BytesSent, int32 BytesReceived)
{
}




//---------------------------------------------------------------------
//发送请求
UHttpHepler* UHttpHepler::SendHttpRequest(UObject* WorldContextObject, FString URL,RequestMethod Method,RequestBodyType BodyType,FString Body,bool NeedPrintLogAtScreen, FString HeadStr1, FString HeadVal1, FString HeadStr2, FString HeadVal2, bool IsHead)
{
    UHttpHepler* Node = NewObject<UHttpHepler>();
    Node->NeedPrintLog=NeedPrintLogAtScreen;
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetHeader(TEXT("Content-Type"), BodyType==RequestBodyType::application_json?TEXT("application/json;charset=UTF-8"):(BodyType==RequestBodyType::application_x_www_form_urlencoded?TEXT("application/x-www-form-urlencoded;charset=UTF-8"):(BodyType==RequestBodyType::multipart_form_data?TEXT("multipart/form-data;charset=UTF-8"):TEXT("text/xml;charset=UTF-8"))));
    HttpRequest->SetURL(Node->UrlEncode(URL));
    HttpRequest->SetVerb(Method== RequestMethod::GET?TEXT("GET"):TEXT("POST"));

    if (IsHead)
    {
        HttpRequest->SetHeader(HeadStr1, HeadVal1);
        HttpRequest->SetHeader(HeadStr2, HeadVal2);
    }
    

    HttpRequest->SetContentAsString(Body.IsEmpty()?"":Body);
    HttpRequest->OnProcessRequestComplete().BindUObject(Node, &UHttpHepler::OnRequestComplete);
    HttpRequest->ProcessRequest();
    return Node;
}

//请求完成
void UHttpHepler::OnRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded)
{
    FString MessageBody = "";
    if (!HttpRequest.IsValid() || !HttpResponse.IsValid())
    {
        MessageBody = "Error:NoValid---{\"success\":\"Error: Unable to process HTTP Request!\"}";
        if (Fail.IsBound())
        {
            if (this->NeedPrintLog)
                GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,MessageBody,false);
            Fail.Broadcast(MessageBody);
        }
    }
    else if (bSucceeded && EHttpResponseCodes::IsOk(HttpResponse->GetResponseCode()))
    {
        MessageBody = HttpResponse->GetContentAsString();
        //FPlatformMisc::ClipboardCopy(*MessageBody);
        //如果是下载请求，可通过这段代码将文件保存
        //FString Filename = FPaths::GetCleanFilename(HttpRequest->GetURL());
        //FFileHelper::SaveArrayToFile(HttpResponse->GetContent(), *FString::Printf(TEXT("%s%s"), *FPaths::GameSavedDir(), *Filename));
        if (Success.IsBound())
        {
            if (this->NeedPrintLog)
                GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,MessageBody,false);
            Success.Broadcast(MessageBody);
        }
    }else
    {
        MessageBody = "Error:Null---"+FString::Printf(TEXT("{\"success\":\"HTTP Error: %d\"}"), HttpResponse->GetResponseCode());
        if (Fail.IsBound())
        {
            if (this->NeedPrintLog)
                GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,MessageBody,false);
            Fail.Broadcast(MessageBody);
        }
    }
}
//---------------------------------------------------------------------


//url不转码过滤字符
static bool IsAllowedChar(UTF8CHAR LookupChar)
{
    static char AllowedChars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-+=_.~:/#@?&";
    static bool bTableFilled = false;
    static bool AllowedTable[256] = { false };
    if (!bTableFilled)
    {
        for (int32 Idx = 0; Idx < UE_ARRAY_COUNT(AllowedChars) - 1; ++Idx)    // -1 to avoid trailing 0
            {
            uint8 AllowedCharIdx = static_cast<uint8>(AllowedChars[Idx]);
            check(AllowedCharIdx < UE_ARRAY_COUNT(AllowedTable));
            AllowedTable[AllowedCharIdx] = true;
            }
        bTableFilled = true;
    }
    return AllowedTable[LookupChar];
}

//中文url转码
FString UHttpHepler::UrlEncode( const FString &UnencodedString)
{
    FTCHARToUTF8 Converter(*UnencodedString);    //url encoding must be encoded over each utf-8 byte
    const UTF8CHAR* UTF8Data = (UTF8CHAR*)Converter.Get();    //converter uses ANSI instead of UTF8CHAR - not sure why - but other code seems to just do this cast. In this case it really doesn't matter
    FString EncodedString = TEXT("");
    TCHAR Buffer[2] = { 0, 0 };
    for (int32 ByteIdx = 0, Length = Converter.Length(); ByteIdx < Length; ++ByteIdx)
    {
        UTF8CHAR ByteToEncode = UTF8Data[ByteIdx];
        if (IsAllowedChar(ByteToEncode))
        {
            Buffer[0] = ByteToEncode;
            FString TmpString = Buffer;
            EncodedString += TmpString;
        }
        else if (ByteToEncode != '\0')
        {
            EncodedString += TEXT("%");
            EncodedString += FString::Printf(TEXT("%.2X"), ByteToEncode);
        }
    }
    return EncodedString;
}

