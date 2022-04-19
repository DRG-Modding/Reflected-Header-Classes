#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "EModioModManagementEventType.h"
#include "ModioErrorCode.h"
#include "ModioModManagementEvent.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModManagementEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioModID ID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EModioModManagementEventType Event;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioErrorCode Status;
    
    FModioModManagementEvent();
};

