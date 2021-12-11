#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ResourceSpawner.h"
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

