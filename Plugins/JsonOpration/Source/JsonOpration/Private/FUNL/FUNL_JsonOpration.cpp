// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonOpration/Public/FUNL/FUNL_JsonOpration.h"


#include "Json.h"

//创建Json 返回String
void UFUNL_JsonOpration::MakeJson(TMap<FString,FJsonValuesMy> input,FString& OutString)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);

    for (auto Pair : input)
    {
        if (Pair.Value.ValueType=="String")
        {
            JsonObject->SetStringField(Pair.Key,Pair.Value.VString);
        }else if (Pair.Value.ValueType=="Float")
        {
            JsonObject->SetNumberField(Pair.Key,Pair.Value.VFloat);
        }else if (Pair.Value.ValueType=="Bool")
        {
            JsonObject->SetBoolField(Pair.Key,Pair.Value.VBool);
        }else if (Pair.Value.ValueType=="Array")
        {
            JsonObject->SetArrayField(Pair.Key,Pair.Value.VArray);
        }else if (Pair.Value.ValueType=="Object")
        {
            JsonObject->SetObjectField(Pair.Key,Pair.Value.VObject);
        }
        
    }

    auto Writer =TJsonWriterFactory<>::Create(&OutString);

    FJsonSerializer::Serialize(JsonObject.ToSharedRef(),Writer);
}

//创建FString  Json值
void UFUNL_JsonOpration::MakeJsonValue_String(FString input, FJsonValuesMy& JsonValue)
{
    FJsonValuesMy FJsonValuesMy_S;
    FJsonValuesMy_S.ValueType="String";
    FJsonValuesMy_S.VString=input;
    JsonValue=FJsonValuesMy_S;
}

//创建Float  Json值
void UFUNL_JsonOpration::MakeJsonValue_Float(float input, FJsonValuesMy& JsonValue)
{
    FJsonValuesMy FJsonValuesMy_S;
    FJsonValuesMy_S.ValueType="Float";
    FJsonValuesMy_S.VFloat=input;
    JsonValue=FJsonValuesMy_S;
}

//创建Bool  Json值
void UFUNL_JsonOpration::MakeJsonValue_Bool(bool input, FJsonValuesMy& JsonValue)
{
    FJsonValuesMy FJsonValuesMy_S;
    FJsonValuesMy_S.ValueType="Bool";
    FJsonValuesMy_S.VBool=input;
    JsonValue=FJsonValuesMy_S;
}

//创建Array  Json值
void UFUNL_JsonOpration::MakeJsonValue_Array(TArray<FJsonValuesMy> input, FJsonValuesMy& JsonValue)
{
    FJsonValuesMy FJsonValuesMy_S;
    FJsonValuesMy_S.ValueType="Array";
    TArray<TSharedPtr<FJsonValue>> Values;
    for (auto v : input)
    {
        if (v.ValueType=="String")
        {
            TSharedPtr<FJsonValueString> Value=MakeShareable(new FJsonValueString(v.VString));
            Values.Add(Value);
        }else if (v.ValueType=="Float")
        {
            TSharedPtr<FJsonValueNumber> Value=MakeShareable(new FJsonValueNumber(v.VFloat));
            Values.Add(Value);
        }else if (v.ValueType=="Bool")
        {
            TSharedPtr<FJsonValueBoolean> Value=MakeShareable(new FJsonValueBoolean(v.VBool));
            Values.Add(Value);
        }else if (v.ValueType=="Array")
        {
            TSharedPtr<FJsonValueArray> Value=MakeShareable(new FJsonValueArray(v.VArray));
            Values.Add(Value);
        }else if (v.ValueType=="Object")
        {
            TSharedPtr<FJsonValueObject> Value=MakeShareable(new FJsonValueObject(v.VObject));
            Values.Add(Value);
        }
        FJsonValuesMy_S.VArray=Values;
        JsonValue=FJsonValuesMy_S;
    }
    JsonValue=FJsonValuesMy_S;
}

//创建Object  Json值
void UFUNL_JsonOpration::MakeJsonValue_Object(FString Name, FJsonValuesMy ObjectValue,FJsonValuesMy& JsonValue)
{
    FJsonValuesMy FJsonValuesMy_S;
    FJsonValuesMy_S.ValueType="Object";
    TSharedPtr<FJsonObject> Values=MakeShareable(new FJsonObject);
    if (ObjectValue.ValueType=="String")
    {
        Values->SetStringField(Name,ObjectValue.VString);
    }else if (ObjectValue.ValueType=="Float")
    {
        Values->SetNumberField(Name,ObjectValue.VFloat);
    }else if (ObjectValue.ValueType=="Bool")
    {
        Values->SetBoolField(Name,ObjectValue.VBool);
    }else if (ObjectValue.ValueType=="Array")
    {
        Values->SetArrayField(Name,ObjectValue.VArray);
    }else if (ObjectValue.ValueType=="Object")
    {
        Values->SetObjectField(Name,ObjectValue.VObject);
    }
    FJsonValuesMy_S.VObject=Values;
    JsonValue=FJsonValuesMy_S;
}

//获取解析Json值 String
void UFUNL_JsonOpration::GetJsonValueAttribute_String(FString InputJson,FString Attribute,bool& IsValid, FString& Value)
{
    IsValid=false;
    TSharedPtr<FJsonObject> JsonParsed;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(InputJson.TrimStartAndEnd());
   
    if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
    {
        Value=JsonParsed->GetStringField(Attribute);
        IsValid=!Value.IsEmpty();
    }
}

//获取解析Json值 float
void UFUNL_JsonOpration::GetJsonValueAttribute_Float(FString InputJson,FString Attribute, float& Value)
{
    TSharedPtr<FJsonObject> JsonParsed;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(InputJson.TrimStartAndEnd());
    if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
    {
        Value=JsonParsed->GetNumberField(Attribute);
    }
}

//获取解析Json值 bool
void UFUNL_JsonOpration::GetJsonValueAttribute_Bool(FString InputJson,FString Attribute,bool& Value)
{
    TSharedPtr<FJsonObject> JsonParsed;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(InputJson.TrimStartAndEnd());
    if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
    {
        Value=JsonParsed->GetBoolField(Attribute);
    }  
}

//获取解析Json值 Array
void UFUNL_JsonOpration::GetJsonValueAttribute_Array(FString InputJson,FString Attribute,DataType ChildAttributeType, bool& IsValid,TArray<FString>& Value)
{
    IsValid=false;
    TSharedPtr<FJsonObject> JsonParsed;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(InputJson.TrimStartAndEnd());
    if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
    {
        TArray<TSharedPtr<FJsonValue>> Array=JsonParsed->GetArrayField(Attribute);
        for (auto MyJsonValue : Array)
        {
            switch (ChildAttributeType)
            {
            case DataType::String:
                Value.Add(MyJsonValue.Get()->AsString());
                break;
            case DataType::Float:
                Value.Add(FString::SanitizeFloat(MyJsonValue.Get()->AsNumber()));
                break;
            case DataType::Bool:
                Value.Add(MyJsonValue.Get()->AsBool()?TEXT("true"):TEXT("false"));
                break;
            case DataType::Array:
                {
                    FString ArrString;
                    TSharedRef<TJsonWriter<>> ArrWriter = TJsonWriterFactory<>::Create(&ArrString);
                    FJsonSerializer::Serialize(MyJsonValue.Get()->AsArray(), ArrWriter);
                    Value.Add(ArrString);
                    break;
                }
            case DataType::Object:
                {
                    FString ObjectValue;
                    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&ObjectValue);
                    FJsonSerializer::Serialize(MyJsonValue.Get()->AsObject().ToSharedRef(), Writer);
                    Value.Add(ObjectValue);
                    break;
                }
            }
        } 
        IsValid=Value.IsValidIndex(0);
    }
}

//获取解析Json值2 Array

void UFUNL_JsonOpration::GetJsonTo_Array(FString InputJson, FString Attribute, DataType ChildAttributeType, bool& IsValid, TArray<FString>& Value)
{
    IsValid = false;
    TSharedPtr<FJsonObject> JsonParsed;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(InputJson.TrimStartAndEnd());
    if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
    {
        TArray<TSharedPtr<FJsonValue>> Array = JsonParsed->GetArrayField(Attribute);
        for (auto MyJsonValue : Array)
        {
            switch (ChildAttributeType)
            {
            case DataType::String:
                Value.Add(MyJsonValue.Get()->AsString());
                break;
            case DataType::Float:
                Value.Add(FString::SanitizeFloat(MyJsonValue.Get()->AsNumber()));
                break;
            case DataType::Bool:
                Value.Add(MyJsonValue.Get()->AsBool() ? TEXT("true") : TEXT("false"));
                break;
            case DataType::Array:
            {
                FString ArrString;
                TSharedRef<TJsonWriter<>> ArrWriter = TJsonWriterFactory<>::Create(&ArrString);
                FJsonSerializer::Serialize(MyJsonValue.Get()->AsArray(), ArrWriter);
                Value.Add(ArrString);
                break;
            }
            case DataType::Object:
            {
                FString ObjectValue;
                TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&ObjectValue);
                FJsonSerializer::Serialize(MyJsonValue.Get()->AsObject().ToSharedRef(), Writer);
                Value.Add(ObjectValue);
                break;
            }
            }
        }
        IsValid = Value.IsValidIndex(0);
    }
}

//获取解析Json值 Object
void UFUNL_JsonOpration::GetJsonValueAttribute_Object(FString InputJson,FString Attribute,bool& IsValid,FString& ObjectValue)
{
    IsValid=false;
    TSharedPtr<FJsonObject> JsonParsed;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(InputJson.TrimStartAndEnd());
    if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
    {
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&ObjectValue);
        FJsonSerializer::Serialize(JsonParsed->GetObjectField(Attribute).ToSharedRef(), Writer);
        IsValid=*ObjectValue!=NULL;
    }
}








