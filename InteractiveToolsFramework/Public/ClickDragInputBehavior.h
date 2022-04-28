#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "ClickDragInputBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UClickDragInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateModifiersDuringDrag;
    
    UClickDragInputBehavior();
};

