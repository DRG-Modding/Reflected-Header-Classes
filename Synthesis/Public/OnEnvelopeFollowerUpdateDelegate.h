#pragma once
#include "CoreMinimal.h"
#include "OnEnvelopeFollowerUpdateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnvelopeFollowerUpdate, float, EnvelopeValue);

