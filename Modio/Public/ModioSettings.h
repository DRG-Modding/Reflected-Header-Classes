#pragma once
#include "CoreMinimal.h"
#include "EModioPortal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EModioEnvironment.h"
#include "EModioLogLevel.h"
#include "ModioSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class MODIO_API UModioSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int64 GameId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ApiKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioEnvironment Environment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioLogLevel LogLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioPortal DefaultPortal;
    
    UModioSettings();
};

