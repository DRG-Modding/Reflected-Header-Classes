#pragma once
#include "CoreMinimal.h"
#include "EMinersManualSection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MinersManualNotificationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMinersManualNotification, EMinersManualSection, Section, FGuid, ObjectID, FText, Text);

