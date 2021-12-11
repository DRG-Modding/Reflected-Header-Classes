#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InputBehaviorSource.h"
#include "InteractiveGizmo.generated.h"

class UInputBehaviorSet;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveGizmo : public UObject, public IInputBehaviorSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UInputBehaviorSet* InputBehaviors;
    
public:
    UInteractiveGizmo();
    
    // Fix for true pure virtual functions not being implemented
};

