#pragma once
#include "CoreMinimal.h"
#include "ResourceSpawner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GlobalMissionParameters.generated.h"

UCLASS()
class UGlobalMissionParameters : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceSpawner> DefaultResources;
    
public:
    UGlobalMissionParameters();
};

