#pragma once
#include "CoreMinimal.h"
#include "OnSamplePlaybackProgressDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSamplePlaybackProgress, float, ProgressPercent, float, ProgressTimeSeconds);

