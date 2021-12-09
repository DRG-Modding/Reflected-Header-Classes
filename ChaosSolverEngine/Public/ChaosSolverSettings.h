#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
//CROSS-MODULE INCLUDE: CoreUObject SoftClassPath
#include "ChaosSolverSettings.generated.h"

UCLASS(DefaultConfig)
class CHAOSSOLVERENGINE_API UChaosSolverSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath DefaultChaosSolverActorClass;
    
    UChaosSolverSettings();
};

