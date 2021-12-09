#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "SpecialEventSettings.generated.h"

class USpecialEvent;
class AEventRewardFrame;
class UDebrisPositioning;

UCLASS(BlueprintType)
class USpecialEventSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<USpecialEvent*> SpecialEvents;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AEventRewardFrame> EventRewardFrameClass;
    
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* EventRewardFramePositioning;
    
    UPROPERTY(EditAnywhere)
    float EventRewardRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CreditsReward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float XPReward;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SpawnChanceMissionLengthCurve;
    
public:
    USpecialEventSettings();
};

