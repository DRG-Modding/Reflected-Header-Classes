#pragma once
#include "CoreMinimal.h"
#include "BehaviorTreeTemplateInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BehaviorTreeManager.generated.h"

class UBehaviorTreeComponent;

UCLASS(Blueprintable, Transient)
class AIMODULE_API UBehaviorTreeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDebuggerSteps;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBehaviorTreeTemplateInfo> LoadedTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UBehaviorTreeComponent*> ActiveComponents;
    
public:
    UBehaviorTreeManager();
};

