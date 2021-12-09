#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PlayerAfflictionOverlay.generated.h"

class UTexture2D;
class USoundCue;
class UPlayerAfflictionOverlayWidget;

UCLASS(BlueprintType)
class UPlayerAfflictionOverlay : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor TextureTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPlayerAfflictionOverlayWidget> WidgetOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USoundCue> Audio2D_OnBegin;
    
    UPlayerAfflictionOverlay();
};

