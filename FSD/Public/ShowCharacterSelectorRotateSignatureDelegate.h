#pragma once
#include "CoreMinimal.h"
#include "ShowCharacterSelectorRotateSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShowCharacterSelectorRotateSignature, float, Pitch, float, Yaw);

