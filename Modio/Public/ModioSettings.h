#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EModioEnvironment.h"
#include "EModioLogLevel.h"
#include "EModioPortal.h"
#include "ModioSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class MODIO_API UModioSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int64 GameId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString ApiKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EModioEnvironment Environment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EModioLogLevel LogLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EModioPortal DefaultPortal;
    
    UModioSettings();
};

