#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoStateTarget.h"
#include "GizmoLambdaStateTarget.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoLambdaStateTarget : public UObject, public IGizmoStateTarget {
    GENERATED_BODY()
public:
    UGizmoLambdaStateTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void EndUpdate() override PURE_VIRTUAL(EndUpdate,);
    
    UFUNCTION(BlueprintCallable)
    void BeginUpdate() override PURE_VIRTUAL(BeginUpdate,);
    
};

