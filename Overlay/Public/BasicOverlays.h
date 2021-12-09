#pragma once
#include "CoreMinimal.h"
#include "Overlays.h"
#include "OverlayItem.h"
#include "BasicOverlays.generated.h"

UCLASS()
class OVERLAY_API UBasicOverlays : public UOverlays {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOverlayItem> Overlays;
    
    UBasicOverlays();
};

