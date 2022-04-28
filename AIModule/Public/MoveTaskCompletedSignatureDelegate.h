#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingResult.h"
#include "MoveTaskCompletedSignatureDelegate.generated.h"

class AAIController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMoveTaskCompletedSignature, TEnumAsByte<EPathFollowingResult::Type>, Result, AAIController*, AIController);

