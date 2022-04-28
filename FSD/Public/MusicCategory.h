#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MusicCategory.generated.h"

UCLASS(Blueprintable)
class UMusicCategory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FadeDuration;
    
    UMusicCategory();
};

