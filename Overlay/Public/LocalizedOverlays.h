#pragma once
#include "CoreMinimal.h"
#include "Overlays.h"
#include "LocalizedOverlays.generated.h"

class UBasicOverlays;

UCLASS()
class OVERLAY_API ULocalizedOverlays : public UOverlays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBasicOverlays* DefaultOverlays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UBasicOverlays*> LocaleToOverlaysMap;
    
    ULocalizedOverlays();
};

