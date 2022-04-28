#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ItemMarker.generated.h"

UCLASS(Abstract, Blueprintable)
class AItemMarker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMarkerValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMarkerVisible;
    
public:
    AItemMarker();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerVisibilityChanged(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerValidChanged(bool Valid);
    
};

