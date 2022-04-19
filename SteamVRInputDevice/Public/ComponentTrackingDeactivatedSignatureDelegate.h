#pragma once
#include "CoreMinimal.h"
#include "ComponentTrackingDeactivatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FComponentTrackingDeactivatedSignature, int32, DeviceID, FName, DeviceClass, const FString&, DeviceModel);

