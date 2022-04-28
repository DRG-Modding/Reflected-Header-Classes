#pragma once
#include "CoreMinimal.h"
#include "InternalToolFrameworkActor.h"
#include "GizmoActor.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API AGizmoActor : public AInternalToolFrameworkActor {
    GENERATED_BODY()
public:
    AGizmoActor();
};

