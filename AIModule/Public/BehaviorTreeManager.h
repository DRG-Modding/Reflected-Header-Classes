#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BehaviorTreeTemplateInfo.h"
#include "BehaviorTreeManager.generated.h"

class UBehaviorTreeComponent;

UCLASS(Transient)
class AIMODULE_API UBehaviorTreeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 MaxDebuggerSteps;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBehaviorTreeTemplateInfo> LoadedTemplates;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UBehaviorTreeComponent*> ActiveComponents;
    
public:
    UBehaviorTreeManager();
};

