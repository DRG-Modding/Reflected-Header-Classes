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
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FEnvDirection LineA;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FEnvDirection LineB;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EEnvTestDot TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bAbsoluteValue;
    
public:
    UEnvQueryTest_Dot();
};

