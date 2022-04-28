#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthEventQuantization.h"
#include "OnQuantizationEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnQuantizationEvent, ETimeSynthEventQuantization, QuantizationType, int32, NumBars, float, Beat);

