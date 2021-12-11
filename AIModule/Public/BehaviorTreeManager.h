#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BehaviorTreeTemplateInfo.h"
#include "BehaviorTreeManager.generated.h"

class UBehaviorTreeComponent;

UCLASS(Transient)
class AIMODULE_API UBehaviorTreeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    int32 MaxDebuggerSteps;
    
protected:
    UPROPERTY()
    TArray<FBehaviorTreeTemplateInfo> LoadedTemplates;
    
    UPROPERTY(Export)
    TArray<UBehaviorTreeComponent*> ActiveComponents;
    
public:
    UBehaviorTreeManager();
};

