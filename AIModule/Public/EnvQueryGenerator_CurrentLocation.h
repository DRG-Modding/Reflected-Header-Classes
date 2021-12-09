#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator.h"
#include "EnvQueryGenerator_CurrentLocation.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> QueryContext;
    
public:
    UEnvQueryGenerator_CurrentLocation();
};

