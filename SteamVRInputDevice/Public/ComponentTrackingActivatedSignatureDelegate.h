#pragma once
#include "CoreMinimal.h"
#include "ComponentTrackingActivatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FComponentTrackingActivatedSignature, int32, DeviceID, FName, DeviceClass, const FString&, DeviceModel);

