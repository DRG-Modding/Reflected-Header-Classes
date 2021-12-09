#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "MusicCategory.generated.h"

UCLASS()
class UMusicCategory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FadeDuration;
    
    UMusicCategory();
};

