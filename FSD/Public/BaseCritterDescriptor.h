#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: FSDEngine DeepPathFinderType
#include "BaseCritterDescriptor.generated.h"

class UDebrisPositioning;
class AFSDPawn;
class UBiome;

UCLASS(Abstract)
class UBaseCritterDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AFSDPawn> CritterClass;
    
    UPROPERTY(EditAnywhere)
    TMap<UBiome*, TSoftClassPtr<AFSDPawn>> BiomeClassOverrides;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    DeepPathFinderType PathfinderType;
    
public:
    UBaseCritterDescriptor();
};
