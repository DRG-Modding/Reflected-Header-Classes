#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ItemMarker.generated.h"

UCLASS(Abstract)
class AItemMarker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bMarkerValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bMarkerVisible;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMarkerVisibilityChanged(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMarkerValidChanged(bool Valid);
    
public:
    AItemMarker();
};
