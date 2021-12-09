#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EMissionStructure.h"
#include "DeepDiveTesterItem.h"
#include "DeepDiveTester.generated.h"

class UBiome;

UCLASS()
class ADeepDiveTester : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UBiome* Biome;
    
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    EMissionStructure MissionStructure;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FDeepDiveTesterItem> Stages;
    
public:
    ADeepDiveTester();
};

