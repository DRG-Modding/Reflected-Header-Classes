#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AnimNotifyState_OverrideItemOffset.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_OverrideItemOffset : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector CameraOffset;
    
public:
    UAnimNotifyState_OverrideItemOffset();
};

