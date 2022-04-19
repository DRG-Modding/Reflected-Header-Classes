#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EEnvTestDistance.h"
#include "EnvQueryTest.h"
#include "EnvQueryTest_Distance.generated.h"

class UEnvQueryContext;

UCLASS()
class UEnvQueryTest_Distance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UEnvQueryTest_Distance();
};

