#pragma once
#include "CoreMinimal.h"
#include "EModioModManagementEventType.h"
#include "ModioModID.h"
#include "ModioErrorCode.h"
#include "ModioModManagementEvent.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModManagementEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioModID ID;
    
    UPROPERTY(BlueprintReadOnly)
    EModioModManagementEventType Event;
    
    UPROPERTY(BlueprintReadOnly)
    FModioErrorCode Status;
    
    FModioModManagementEvent();
};

