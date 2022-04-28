#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseFloatParameterSource.h"
#include "GizmoAxisIntervalParameterSource.generated.h"

class UGizmoFloatParameterSource;
class IGizmoFloatParameterSource;

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource;
    
    UPROPERTY(EditAnywhere)
    float MinParameter;
    
    UPROPERTY(EditAnywhere)
    float MaxParameter;
    
    UGizmoAxisIntervalParameterSource();
};

