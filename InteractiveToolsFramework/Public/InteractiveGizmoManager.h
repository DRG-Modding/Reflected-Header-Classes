#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ToolContextTransactionProvider.h"
#include "ActiveGizmo.h"
#include "InteractiveGizmoManager.generated.h"

class UInteractiveGizmoBuilder;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveGizmoManager : public UObject, public IToolContextTransactionProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FActiveGizmo> ActiveGizmos;
    
    UPROPERTY()
    TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders;
    
public:
    UInteractiveGizmoManager();
    
    // Fix for true pure virtual functions not being implemented
};

