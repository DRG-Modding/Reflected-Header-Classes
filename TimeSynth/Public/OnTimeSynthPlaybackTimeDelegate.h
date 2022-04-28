#pragma once
#include "CoreMinimal.h"
#include "OnTimeSynthPlaybackTimeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimeSynthPlaybackTime, float, SynthPlaybackTimeSeconds);

