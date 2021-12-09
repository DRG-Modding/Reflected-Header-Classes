#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EImplicitTypeEnum
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore ECollisionTypeEnum
#include "GeometryCollectionSizeSpecificData.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionSizeSpecificData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxSize;
    
    UPROPERTY(EditAnywhere)
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(EditAnywhere)
    EImplicitTypeEnum ImplicitType;
    
    UPROPERTY(EditAnywhere)
    int32 MinLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MinClusterLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MaxClusterLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionObjectReductionPercentage;
    
    UPROPERTY(EditAnywhere)
    float CollisionParticlesFraction;
    
    UPROPERTY(EditAnywhere)
    int32 MaximumCollisionParticles;
    
    FGeometryCollectionSizeSpecificData();
};

