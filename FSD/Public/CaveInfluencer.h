#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CaveInfluencer.generated.h"

UCLASS(Blueprintable)
class UCaveInfluencer : public UDataAsset {
    GENERATED_BODY()
public:
    UCaveInfluencer();
};

