#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState
#include "AnimNotify_PlayMontageNotifyWindow.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ANIMGRAPHRUNTIME_API UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NotifyName;
    
public:
    UAnimNotify_PlayMontageNotifyWindow();
};

