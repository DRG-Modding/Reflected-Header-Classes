#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState
#include "AnimNotifyState_HideEquippedItem.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_HideEquippedItem : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_HideEquippedItem();
};

