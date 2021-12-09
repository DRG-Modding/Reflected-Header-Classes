#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseTransformSource.h"
#include "GizmoTransformProxyTransformSource.generated.h"

class UTransformProxy;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTransformProxy* Proxy;
    
    UGizmoTransformProxyTransformSource();
};

