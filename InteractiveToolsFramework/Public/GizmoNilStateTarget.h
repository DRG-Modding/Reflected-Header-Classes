#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoStateTarget.h"
#include "GizmoNilStateTarget.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoNilStateTarget : public UObject, public IGizmoStateTarget {
    GENERATED_BODY()
public:
    UGizmoNilStateTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void EndUpdate() override PURE_VIRTUAL(EndUpdate,);
    
    UFUNCTION(BlueprintCallable)
    void BeginUpdate() override PURE_VIRTUAL(BeginUpdate,);
    
};

