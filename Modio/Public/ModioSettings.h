#pragma once
#include "CoreMinimal.h"
#include "EModioLogLevel.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EModioEnvironment.h"
#include "EModioPortal.h"
#include "ModioSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class MODIO_API UModioSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    int64 GameId;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FString ApiKey;
    
    UPROPERTY(Config, EditDefaultsOnly)
    EModioEnvironment Environment;
    
    UPROPERTY(Config, EditDefaultsOnly)
    EModioLogLevel LogLevel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    EModioPortal DefaultPortal;
    
    UModioSettings();
};

