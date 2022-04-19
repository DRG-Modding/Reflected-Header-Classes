#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BaseResource.generated.h"

UCLASS()
class UBaseResource : public UDataAsset {
    GENERATED_BODY()
public:
    UBaseResource();
};

