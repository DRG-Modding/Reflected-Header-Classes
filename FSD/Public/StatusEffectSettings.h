#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "StatusEffectSettings.generated.h"

class UStatusEffect;

UCLASS()
class UStatusEffectSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> frozen;
    
    UStatusEffectSettings();
};

