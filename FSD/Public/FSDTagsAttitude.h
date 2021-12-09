#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "FSDTagsAttitude.generated.h"

USTRUCT(BlueprintType)
struct FFSDTagsAttitude {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag Friendly;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag Neutral;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag Hostile;
    
    FSD_API FFSDTagsAttitude();
};

