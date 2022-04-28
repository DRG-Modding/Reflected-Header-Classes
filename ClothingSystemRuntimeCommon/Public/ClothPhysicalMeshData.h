#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PointWeightMap.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothVertBoneData -FallbackName=ClothVertBoneData
#include "ClothPhysicalMeshData.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothPhysicalMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Normals;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> Indices;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, FPointWeightMap> WeightMaps;
    
    UPROPERTY(EditAnywhere)
    TArray<float> InverseMasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothVertBoneData> BoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBoneWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFixedVerts;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> SelfCollisionIndices;
    
    UPROPERTY(EditAnywhere)
    TArray<float> MaxDistances;
    
    UPROPERTY(EditAnywhere)
    TArray<float> BackstopDistances;
    
    UPROPERTY(EditAnywhere)
    TArray<float> BackstopRadiuses;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AnimDriveMultipliers;
    
    FClothPhysicalMeshData();
};

