#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InteractiveToolsContext.generated.h"

class UInputRouter;
class UInteractiveToolManager;
class UInteractiveGizmoManager;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolsContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInputRouter* InputRouter;
    
    UPROPERTY()
    UInteractiveToolManager* ToolManager;
    
    UPROPERTY()
    UInteractiveGizmoManager* GizmoManager;
    
protected:
    UPROPERTY()
    TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;
    
public:
    UInteractiveToolsContext();
};

