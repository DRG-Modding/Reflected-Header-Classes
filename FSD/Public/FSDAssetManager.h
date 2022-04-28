#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManager -FallbackName=AssetManager
#include "FSDAssetManager.generated.h"

UCLASS(Blueprintable)
class UFSDAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UFSDAssetManager();
};

