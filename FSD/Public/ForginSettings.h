#pragma once
#include "CoreMinimal.h"
#include "ESchematicType.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ForginSettings.generated.h"

UCLASS()
class UForginSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 XPRequiredPerLevel;
    
    UPROPERTY(EditAnywhere)
    TArray<ESchematicType> MasteryRewardCycle;
    
    UForginSettings();
};

