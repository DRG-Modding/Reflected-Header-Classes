#pragma once
#include "CoreMinimal.h"
#include "FlareProductionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlareProductionDelegate, int32, NextIndex, float, Progress);

