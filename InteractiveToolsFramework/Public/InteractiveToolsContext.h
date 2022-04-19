#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveToolsContext.generated.h"

class UInteractiveToolManager;
class UInputRouter;
class UInteractiveGizmoManager;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolsContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UInputRouter* InputRouter;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UInteractiveToolManager* ToolManager;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UInteractiveGizmoManager* GizmoManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;
    
public:
    UInteractiveToolsContext();
};

