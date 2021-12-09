#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "IntervalGizmoActor.generated.h"

class UGizmoLineHandleComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API AIntervalGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGizmoLineHandleComponent* UpIntervalComponent;
    
    UPROPERTY(Export)
    UGizmoLineHandleComponent* DownIntervalComponent;
    
    UPROPERTY(Export)
    UGizmoLineHandleComponent* ForwardIntervalComponent;
    
    AIntervalGizmoActor();
};

