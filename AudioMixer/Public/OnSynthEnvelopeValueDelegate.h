#pragma once
#include "CoreMinimal.h"
#include "OnSynthEnvelopeValueDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSynthEnvelopeValue, const float, EnvelopeValue);

