// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructManage.generated.h"



UENUM(BlueprintType)
enum class EWeaponType : uint8 
{
	W_Knife,
	W_BigKnife,
	W_Sworld
};

USTRUCT(BlueprintType)
struct FTestPlayerData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	EWeaponType Weapon;
	int32 HP;
	int32 MP;
	int32 EXP;
	FString Attack;

};

UCLASS()
class QQQQQGGG_API AStructManage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStructManage();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
