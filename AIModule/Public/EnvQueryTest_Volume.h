#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest.h"
#include "EnvQueryTest_Volume.generated.h"

class UEnvQueryContext;
class AVolume;

UCLASS(MinimalAPI)
class UEnvQueryTest_Volume : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> VolumeContext;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AVolume> VolumeClass;
    
    UPROPERTY(EditAnywhere)
    uint8 bDoComplexVolumeTest: 1;
    
public:
    UEnvQueryTest_Volume();
};

