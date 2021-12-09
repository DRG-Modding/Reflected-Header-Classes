#pragma once
#include "CoreMinimal.h"
#include "ModioGameID.h"
#include "ModioApiKey.h"
#include "EModioEnvironment.h"
#include "EModioPortal.h"
#include "ModioInitializeOptions.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioInitializeOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioGameID GameId;
    
    UPROPERTY(BlueprintReadOnly)
    FModioApiKey ApiKey;
    
    UPROPERTY(BlueprintReadOnly)
    EModioEnvironment GameEnvironment;
    
    UPROPERTY(BlueprintReadOnly)
    EModioPortal PortalInUse;
    
    FModioInitializeOptions();
};

