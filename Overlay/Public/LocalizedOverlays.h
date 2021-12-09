#pragma once
#include "CoreMinimal.h"
#include "Overlays.h"
#include "LocalizedOverlays.generated.h"

class UBasicOverlays;

UCLASS()
class OVERLAY_API ULocalizedOverlays : public UOverlays {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBasicOverlays* DefaultOverlays;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, UBasicOverlays*> LocaleToOverlaysMap;
    
    ULocalizedOverlays();
};

