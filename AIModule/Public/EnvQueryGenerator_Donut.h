#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryGenerator_ProjectedPoints.h"
#include "AIDataProviderIntValue.h"
#include "EnvDirection.h"
#include "EnvQueryGenerator_Donut.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue NumberOfRings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue PointsPerRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvDirection ArcDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ArcAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpiralPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDefineArc: 1;
    
    UEnvQueryGenerator_Donut();
};

