#pragma once
#include "CoreMinimal.h"
#include "OnFloatValueChangedEventDelegate2.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloatValueChangedEvent, float, Value);

