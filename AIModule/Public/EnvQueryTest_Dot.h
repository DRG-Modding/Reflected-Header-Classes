#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest.h"
#include "EnvDirection.h"
#include "EEnvTestDot.h"
#include "EnvQueryTest_Dot.generated.h"

UCLASS(MinimalAPI)
class UEnvQueryTest_Dot : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection LineA;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection LineB;
    
    UPROPERTY(EditDefaultsOnly)
    EEnvTestDot TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAbsoluteValue;
    
public:
    UEnvQueryTest_Dot();
};

