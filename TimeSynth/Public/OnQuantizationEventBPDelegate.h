#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthEventQuantization.h"
#include "OnQuantizationEventBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnQuantizationEventBP, ETimeSynthEventQuantization, QuantizationType, int32, NumBars, float, Beat);

