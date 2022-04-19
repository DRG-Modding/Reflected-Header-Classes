#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "IntervalGizmoActor.generated.h"

class UGizmoLineHandleComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API AIntervalGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* UpIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* DownIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* ForwardIntervalComponent;
    
    AIntervalGizmoActor();
};

