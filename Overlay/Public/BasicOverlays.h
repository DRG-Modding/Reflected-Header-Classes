#pragma once
#include "CoreMinimal.h"
#include "Overlays.h"
#include "OverlayItem.h"
#include "BasicOverlays.generated.h"

UCLASS(Blueprintable)
class OVERLAY_API UBasicOverlays : public UOverlays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayItem> Overlays;
    
    UBasicOverlays();
};

