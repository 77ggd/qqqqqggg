// Copyright PJLF Group. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "CoACD.Generated.h"

class FCoACD : public IModuleInterface
{
	virtual void StartupModule();
	virtual void ShutdownModule();
};

UENUM(BlueprintType)
enum class ECoACD_PreprocessMode : uint8
{
	Auto = 0,
	On = 1,
	Off = 2,
};

// CoACD execution arguments.
// See https://colin97.github.io/CoACD/ for details.
USTRUCT(BlueprintType)
struct COACD_API FCoACD_Args
{
	GENERATED_BODY()

	// ~ CoACD Args

	// Concavity threshold. With larger threshold, fewer convex components you will get.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD, Meta = (UIMin = 0.01f, UIMax = 1.f))
	float Threshold = 0.05;

	// Voxelization preprocess toggle
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD)
	ECoACD_PreprocessMode PreprocessMode = ECoACD_PreprocessMode::Auto;

	// Voxelization preprocess resolution
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD, Meta = (UIMin = 20, UIMax = 100))
	int32 PreprocessResolution = 50;

	// Voxelization sample resolution
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD, Meta = (UIMin = 1000, UIMax = 10000))
	int32 SampleResolution = 2000;

	// Monte Carlo tree search nodes
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD, Meta = (UIMin = 10, UIMax = 40, DisplayName = "MCTS Nodes"))
	int32 MCTSNodes = 20;

	// Monte Carlo tree search iterations
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD, Meta = (UIMin = 60, UIMax = 2000, DisplayName = "MCTS Iteration"))
	int32 MCTSIteration = 150;

	// Monte Carlo tree search max depth
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD, Meta = (UIMin = 2, UIMax = 7, DisplayName = "MCTS Max Depth"))
	int32 MCTSMaxDepth = 3;

	// Whether to align the cutting plane directions with the principal axes of the input shape.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD)
	bool PCA = false;

	// Whether to reduce the number of convex components through a post-processing merge.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD)
	bool Merge = true;

	// Max convex components, -1 = no limit.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD)
	int32 MaxConvexHull = -1;

	// Monte Carlo seed.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CoACD)
	int32 Seed = 0;


	// ~ Custom Args

	// LOD index of the source model.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Params, Meta = (DisplayName = "Source LOD Index"))
	int32 SourceLODIndex = 0;

	// Whether to remove existing collision.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Params)
	bool bRemoveExistingCollision = true;

	// Blacklist of material slot names that never affect collision, for example, "BackfaceOutline".
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Params)
	TArray<FString> MaterialSlotNameKeywordsToExclude;
};

UCLASS()
class COACD_API UKismetCoACDLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void GenerateConvexCollisionForStaticMeshUsingCoACD(class UStaticMesh* InMesh, FCoACD_Args Args);
};
