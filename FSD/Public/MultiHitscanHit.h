#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
#include "MultiHitscanHit.generated.h"

USTRUCT(BlueprintType)
struct FMultiHitscanHit {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint8 TargetComponentIndex;
    
    UPROPERTY(Transient)
    uint8 PhysicalMaterialIndex;
    
    UPROPERTY(Transient)
    FVector_NetQuantize HitLocation;
    
    UPROPERTY(Transient)
    FVector_NetQuantizeNormal ImpactNormal;
    
    UPROPERTY(Transient)
    uint8 BoneIndex;
    
    UPROPERTY(Transient)
    bool PlayImpactSound;
    
    UPROPERTY(Transient)
    bool SpawnDecal;
    
    FSD_API FMultiHitscanHit();
};

