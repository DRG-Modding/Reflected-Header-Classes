#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvDirection.h"
#include "EnvQueryGenerator_ProjectedPoints.h"
#include "AIDataProviderFloatValue.h"
#include "AIDataProviderIntValue.h"
#include "EPointOnCircleSpacingMethod.h"
#include "EnvTraceData.h"
#include "EnvQueryGenerator_OnCircle.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue CircleRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SpaceBetween;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue NumberOfPoints;
    
    UPROPERTY(EditDefaultsOnly)
    EPointOnCircleSpacingMethod PointOnCircleSpacingMethod;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection ArcDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ArcAngle;
    
    UPROPERTY()
    float AngleRadians;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> CircleCenter;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreAnyContextActorsWhenGeneratingCircle;
    
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue CircleCenterZOffset;
    
    UPROPERTY(EditAnywhere)
    FEnvTraceData TraceData;
    
    UPROPERTY(EditAnywhere)
    uint8 bDefineArc: 1;
    
    UEnvQueryGenerator_OnCircle();
};

