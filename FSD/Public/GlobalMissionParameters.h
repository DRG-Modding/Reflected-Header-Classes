#pragma once
#include "CoreMinimal.h"
#include "ResourceSpawner.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "GlobalMissionParameters.generated.h"

UCLASS()
class UGlobalMissionParameters : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<FResourceSpawner> DefaultResources;
    
public:
    UGlobalMissionParameters();
};

