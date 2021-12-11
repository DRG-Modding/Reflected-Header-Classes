#pragma once
#include "CoreMinimal.h"
#include "EnvQueryGenerator.h"
#include "EnvTraceData.h"
#include "EnvQueryGenerator_ProjectedPoints.generated.h"

UCLASS(Abstract, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData ProjectionData;
    
    UEnvQueryGenerator_ProjectedPoints();
};

