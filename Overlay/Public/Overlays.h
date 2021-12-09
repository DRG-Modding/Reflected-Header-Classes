#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "Overlays.generated.h"

UCLASS(Abstract)
class OVERLAY_API UOverlays : public UObject {
    GENERATED_BODY()
public:
    UOverlays();
};

