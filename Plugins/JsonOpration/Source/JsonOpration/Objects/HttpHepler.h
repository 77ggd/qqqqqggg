// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/IHttpRequest.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "HttpHepler.generated.h"




DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintAsyncNodePinResult, FString, Result);

UENUM(BlueprintType)
enum class RequestMethod : uint8
{
	GET,
    POST
};

UENUM(BlueprintType)
enum class RequestBodyType : uint8
{
	application_json,
	application_x_www_form_urlencoded,
	multipart_form_data,
	text_xml
};

UCLASS()
class JSONOPRATION_API UHttpHepler : public UBlueprintAsyncActionBase
{
public:

	GENERATED_BODY()
	

	bool NeedPrintLog;


	//中文转码
	FString UrlEncode(const FString& UnencodedString);

	
	//Http请求完成
	void OnRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
	//Http请求中
	void OnRequestProgress(FHttpRequestPtr HttpRequest, int32 BytesSent, int32 BytesReceived);

	
	//请求成功
	UPROPERTY(BlueprintAssignable)
	FBlueprintAsyncNodePinResult Success;
	//请求失败
	UPROPERTY(BlueprintAssignable)
	FBlueprintAsyncNodePinResult Fail;

	//发送请求
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
    static UHttpHepler* SendHttpRequest(UObject* WorldContextObject, FString URL,RequestMethod Method,RequestBodyType BodyType,FString Body,bool NeedPrintLogAtScreen,FString HeadStr1,FString HeadVal1,FString HeadStr2,FString HeadVal2,bool IsHead);

	
};
