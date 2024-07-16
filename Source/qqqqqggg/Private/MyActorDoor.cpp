// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorDoor.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values
AMyActorDoor::AMyActorDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HitBox"));
	SetRootComponent(HitBox);
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	DoorMesh->SetupAttachment(RootComponent);

	
}

// Called when the game starts or when spawned
void AMyActorDoor::BeginPlay()
{
	Super::BeginPlay();
	
	FOnTimelineFloatStatic TimelineCallBack;
	TimelineCallBack.BindUFunction(this, TEXT("UpdateDoorLocation"));
	MyTimeline.AddInterpFloat(TimelineCurve,TimelineCallBack);
}

void AMyActorDoor::UpdateDoorLocation(float Value)
{

}

// Called every frame
void AMyActorDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MyTimeline.TickTimeline(DeltaTime);
}

