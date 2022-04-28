#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputBehaviorSource.h"
#include "InteractiveTool.generated.h"

class UInputBehaviorSet;

UCLASS(Blueprintable, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveTool : public UObject, public IInputBehaviorSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputBehaviorSet* InputBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ToolPropertyObjects;
    
public:
    UInteractiveTool();
    
    // Fix for true pure virtual functions not being implemented
};

