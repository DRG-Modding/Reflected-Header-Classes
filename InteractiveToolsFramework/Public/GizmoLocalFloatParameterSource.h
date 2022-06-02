#pragma once
#include "CoreMinimal.h"
#include "GizmoFloatParameterChange.h"
#include "GizmoBaseFloatParameterSource.h"
#include "GizmoLocalFloatParameterSource.generated.h"

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoFloatParameterChange LastChange;
    
    UGizmoLocalFloatParameterSource();
};

