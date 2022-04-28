#pragma once
#include "CoreMinimal.h"
#include "ARSaveWorldPinDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARSaveWorldPin, const TArray<uint8>&, SavedWorld);

