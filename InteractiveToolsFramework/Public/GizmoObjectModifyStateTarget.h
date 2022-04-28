#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoStateTarget.h"
#include "GizmoObjectModifyStateTarget.generated.h"

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoObjectModifyStateTarget : public UObject, public IGizmoStateTarget {
    GENERATED_BODY()
public:
    UGizmoObjectModifyStateTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EndUpdate() override PURE_VIRTUAL(EndUpdate,);
    
    UFUNCTION()
    void BeginUpdate() override PURE_VIRTUAL(BeginUpdate,);
    
};

