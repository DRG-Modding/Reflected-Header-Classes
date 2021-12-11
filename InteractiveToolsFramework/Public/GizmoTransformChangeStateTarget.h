#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoStateTarget.h"
#include "GizmoTransformChangeStateTarget.generated.h"

class UToolContextTransactionProvider;
class IToolContextTransactionProvider;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoTransformChangeStateTarget : public UObject, public IGizmoStateTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IToolContextTransactionProvider> TransactionManager;
    
    UGizmoTransformChangeStateTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void EndUpdate() override PURE_VIRTUAL(EndUpdate,);
    
    UFUNCTION(BlueprintCallable)
    void BeginUpdate() override PURE_VIRTUAL(BeginUpdate,);
    
};

