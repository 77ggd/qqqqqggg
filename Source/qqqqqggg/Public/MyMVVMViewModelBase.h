// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include <iostream>
#include <curl/curl.h>
#include "MyMVVMViewModelBase.generated.h"

/**
 * 
 */
UCLASS()
class QQQQQGGG_API UMyMVVMViewModelBase : public UMVVMViewModelBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
	int32 CurrentHealth;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
	int32 MaxHealth;

private:
	void SetCurrentHealth(int32 newCurrentHealth)
	{
		if (CurrentHealth != newCurrentHealth)
		{
			UE_MVVM_SET_PROPERTY_VALUE(CurrentHealth, newCurrentHealth);
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercent);
		}
	}

	void SetMaxHealth(int32 newMaxHealth)
	{
		if (MaxHealth != newMaxHealth)
		{
			UE_MVVM_SET_PROPERTY_VALUE(MaxHealth, newMaxHealth);
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercent);
		}
	}

	int32 GetCurrentHealth() const
	{
		return CurrentHealth;
	}

	int32 GetMaxHealth() const
	{
		return MaxHealth;
	}

public:
	UFUNCTION(BlueprintPure, FieldNotify)
	float GetHealthPercent() const
	{
		if (MaxHealth != 0)
		{
			return (float)CurrentHealth / (float)MaxHealth;
		}

		else
			return 0;
	}



	size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
		((std::string*)userp)->append((char*)contents, size * nmemb);
		return size * nmemb;
	}

// 	int GetHttpData() {
// 		CURL* curl;
// 		CURLcode res;
// 		std::string readBuffer;
// 
// 		curl_global_init(CURL_GLOBAL_DEFAULT);
// 		curl = curl_easy_init();
// 
// 		if (curl) {
// 			curl_easy_setopt(curl, CURLOPT_URL, "http://your-api-endpoint.com");
// 			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
// 			curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
// 
// 			res = curl_easy_perform(curl);
// 
// 			if (res != CURLE_OK) {
// 				std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
// 			}
// 			else {
// 				std::cout << readBuffer << std::endl;
// 			}
// 
// 			curl_easy_cleanup(curl);
// 		}
// 
// 		curl_global_cleanup();
// 
// 		return 0;
// 	}

};
