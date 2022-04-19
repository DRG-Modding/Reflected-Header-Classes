#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ELaserPointerTargetType.h"
#include "MarkerPlacedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FMarkerPlacedDelegate, FVector, Location, const FText&, Name, FLinearColor, Color, AActor*, Target, ELaserPointerTargetType, TypeOfTarget);

