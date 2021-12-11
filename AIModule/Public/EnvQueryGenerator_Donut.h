#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvDirection.h"
#include "EnvQueryGenerator_ProjectedPoints.h"
#include "AIDataProviderFloatValue.h"
#include "AIDataProviderIntValue.h"
#include "EnvQueryGenerator_Donut.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue NumberOfRings;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderIntValue PointsPerRing;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection ArcDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ArcAngle;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseSpiralPattern;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> Center;
    
    UPROPERTY(EditAnywhere)
    uint8 bDefineArc: 1;
    
    UEnvQueryGenerator_Donut();
};

