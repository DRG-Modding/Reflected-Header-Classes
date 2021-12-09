#pragma once
#include "CoreMinimal.h"
#include "ResourceCreator.h"
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
#include "PatchResourceCreator.generated.h"

class UDebrisPositioning;
class UFloodFillSettings;
class UDebrisBase;

UCLASS(EditInlineNew)
class UPatchResourceCreator : public UResourceCreator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType CarveType;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* PatchNoise;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* CarverNoise;
    
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    float NoiseRange;
    
    UPROPERTY(EditAnywhere)
    float NoiseScale;
    
    UPROPERTY(EditAnywhere)
    float Size;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UDebrisBase*> VeinDebris;
    
    UPatchResourceCreator();
};

