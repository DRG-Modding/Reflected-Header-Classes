#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "AssetLoader.generated.h"

UCLASS()
class FSD_API UAssetLoader : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAssetLoader();
};

