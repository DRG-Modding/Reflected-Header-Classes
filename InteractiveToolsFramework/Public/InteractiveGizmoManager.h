#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ToolContextTransactionProvider.h"
#include "ActiveGizmo.h"
#include "InteractiveGizmoManager.generated.h"

class UInteractiveGizmoBuilder;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveGizmoManager : public UObject, public IToolContextTransactionProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FActiveGizmo> ActiveGizmos;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders;
    
public:
    UInteractiveGizmoManager();
    
    // Fix for true pure virtual functions not being implemented
};

