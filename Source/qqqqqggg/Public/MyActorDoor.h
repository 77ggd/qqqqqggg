// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components\TimelineComponent.h"
#include "MyActorDoor.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UCurveFloat;

UCLASS()
class QQQQQGGG_API AMyActorDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void UpdateDoorLocation(float Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UBoxComponent* HitBox;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UStaticMeshComponent* DoorMesh;

	FTimeline MyTimeline;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UCurveFloat* TimelineCurve;
};
