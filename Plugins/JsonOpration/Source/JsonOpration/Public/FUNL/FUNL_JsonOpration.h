// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Json.h"
#include "FUNL_JsonOpration.generated.h"



USTRUCT(BlueprintType)
struct FJsonValuesMy
{
	GENERATED_BODY()

	FString ValueType;

	FString VString;
	
	float VFloat;
	
	bool VBool;

	TArray<TSharedPtr<FJsonValue>> VArray;
	
	TSharedPtr<FJsonObject> VObject;
	
};


UENUM(BlueprintType)
enum class DataType : uint8
{
	String,
    Float,
	Bool,
	Array,
	Object
};

UCLASS()
class JSONOPRATION_API UFUNL_JsonOpration : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintCallable,BlueprintPure)
	static void MakeJson(TMap<FString,FJsonValuesMy> input,FString& OutString);

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void MakeJsonValue_String(FString input,FJsonValuesMy& JsonValue);

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void MakeJsonValue_Float(float input,FJsonValuesMy& JsonValue);

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void MakeJsonValue_Bool(bool input,FJsonValuesMy& JsonValue);

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void MakeJsonValue_Array(TArray<FJsonValuesMy> input,FJsonValuesMy& JsonValue);
    
	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void MakeJsonValue_Object(FString Name,FJsonValuesMy ObjectValue,FJsonValuesMy& JsonValue);

	
	/*UFUNCTION(BlueprintCallable,BlueprintPure)
	static void JsonDeserialize(FString InputJson,FString Attribute,DataType Type,bool& IsValid, FJsonValuesMy& Value);*/

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void GetJsonValueAttribute_String(FString InputJson,FString Attribute,bool& IsValid,FString& Value);

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void GetJsonValueAttribute_Float(FString InputJson,FString Attribute,float& Value);

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void GetJsonValueAttribute_Bool(FString InputJson,FString Attribute,bool& Value);

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void GetJsonValueAttribute_Array(FString InputJson,FString Attribute,DataType ChildAttributeType, bool& IsValid,TArray<FString>& Value);

	UFUNCTION(BlueprintCallable,BlueprintPure)
    static void GetJsonValueAttribute_Object(FString InputJson,FString Attribute,bool& IsValid,FString& ObjectValue);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static void GetJsonTo_Array(FString InputJson, FString Attribute, DataType ChildAttributeType, bool& IsValid, TArray<FString>& Value);


	
	

	



	
	
};
