#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InputRouter.generated.h"

class UInputBehaviorSet;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInputRouter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bAutoInvalidateOnHover;
    
    UPROPERTY()
    bool bAutoInvalidateOnCapture;
    
protected:
    UPROPERTY()
    UInputBehaviorSet* ActiveInputBehaviors;
    
public:
    UInputRouter();
};

