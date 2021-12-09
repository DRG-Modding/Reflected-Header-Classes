#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InputBehaviorSource.h"
#include "InteractiveTool.generated.h"

class UInputBehaviorSet;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveTool : public UObject, public IInputBehaviorSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UInputBehaviorSet* InputBehaviors;
    
    UPROPERTY()
    TArray<UObject*> ToolPropertyObjects;
    
public:
    UInteractiveTool();
};

