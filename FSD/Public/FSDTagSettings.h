#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "FSDTagsRoot.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "FSDTagSettings.generated.h"

UCLASS()
class UFSDTagSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery IsFriendlyQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery IsNeutralQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery IsHostileQuery;
    
    UPROPERTY(EditAnywhere)
    FFSDTagsRoot Root;
    
    UFSDTagSettings();
};

