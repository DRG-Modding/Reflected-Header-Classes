#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoStateTarget.h"
#include "GizmoTransformChangeStateTarget.generated.h"

class UToolContextTransactionProvider;
class IToolContextTransactionProvider;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoTransformChangeStateTarget : public UObject, public IGizmoStateTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IToolContextTransactionProvider> TransactionManager;
    
    UGizmoTransformChangeStateTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void EndUpdate() override PURE_VIRTUAL(EndUpdate,);
    
    UFUNCTION(BlueprintCallable)
    void BeginUpdate() override PURE_VIRTUAL(BeginUpdate,);
    
};

