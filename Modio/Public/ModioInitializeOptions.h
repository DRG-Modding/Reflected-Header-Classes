#pragma once
#include "CoreMinimal.h"
#include "ModioGameID.h"
#include "ModioApiKey.h"
#include "EModioPortal.h"
#include "EModioEnvironment.h"
#include "ModioInitializeOptions.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioInitializeOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioGameID GameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioApiKey ApiKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioEnvironment GameEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioPortal PortalInUse;
    
    FModioInitializeOptions();
};

