#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Overlays.generated.h"

UCLASS(Abstract)
class OVERLAY_API UOverlays : public UObject {
    GENERATED_BODY()
public:
    UOverlays();
};

