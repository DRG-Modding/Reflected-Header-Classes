#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest.h"
#include "EnvTraceData.h"
#include "EnvQueryTest_Project.generated.h"

UCLASS(MinimalAPI)
class UEnvQueryTest_Project : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData ProjectionData;
    
public:
    UEnvQueryTest_Project();
};

