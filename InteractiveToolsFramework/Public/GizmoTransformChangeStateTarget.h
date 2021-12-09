#pragma once
#include "CoreMinimal.h"
#include "GizmoStateTarget.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
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
};

