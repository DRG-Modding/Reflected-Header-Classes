#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseTransformSource.h"
#include "GizmoScaledTransformSource.generated.h"

class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoScaledTransformSource : public UGizmoBaseTransformSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> ChildTransformSource;
    
    UGizmoScaledTransformSource();
};

