#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "ChaosSolverSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig)
class CHAOSSOLVERENGINE_API UChaosSolverSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath DefaultChaosSolverActorClass;
    
    UChaosSolverSettings();
};

