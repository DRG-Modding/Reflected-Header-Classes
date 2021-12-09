#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "UINotificationItem.generated.h"

USTRUCT(BlueprintType)
struct FUINotificationItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGuid> NotificationIDs;
    
    FSD_API FUINotificationItem();
};

