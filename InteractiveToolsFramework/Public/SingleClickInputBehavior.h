#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "SingleClickInputBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API USingleClickInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitTestOnRelease;
    
    USingleClickInputBehavior();
};

