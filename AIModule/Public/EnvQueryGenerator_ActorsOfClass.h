#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator.h"
#include "AIDataProviderFloatValue.h"
#include "AIDataProviderBoolValue.h"
#include "EnvQueryGenerator_ActorsOfClass.generated.h"

class AActor;
class UEnvQueryContext;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> SearchedActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue GenerateOnlyActorsInRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue SearchRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
    UEnvQueryGenerator_ActorsOfClass();
};

