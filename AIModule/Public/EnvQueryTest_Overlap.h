#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest.h"
#include "EnvOverlapData.h"
#include "EnvQueryTest_Overlap.generated.h"

UCLASS(MinimalAPI)
class UEnvQueryTest_Overlap : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvOverlapData OverlapData;
    
    UEnvQueryTest_Overlap();
};

