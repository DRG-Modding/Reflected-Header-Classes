#pragma once
#include "CoreMinimal.h"
#include "UINotificationItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ItemUINotifications.generated.h"

class UFSDSaveGame;

USTRUCT(BlueprintType)
struct FItemUINotifications {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUINotificationItem> UINotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> UINotificationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDSaveGame* SaveGame;
    
public:
    FSD_API FItemUINotifications();
};

