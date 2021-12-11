#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_ProjectedPoints.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryGenerator_Cone.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue AlignedPointsDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ConeDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue AngleStep;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue range;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> CenterActor;
    
    UPROPERTY(EditAnywhere)
    uint8 bIncludeContextLocation: 1;
    
public:
    UEnvQueryGenerator_Cone();
};

