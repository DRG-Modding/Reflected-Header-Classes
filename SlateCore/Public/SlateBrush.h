#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
#include "Margin.h"
#include "SlateColor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ESlateBrushTileType.h"
#include "ESlateBrushDrawType.h"
#include "ESlateBrushMirrorType.h"
#include "ESlateBrushImageType.h"
#include "SlateBrush.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FSlateBrush {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TintColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ResourceObject;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox2D UVRegion;
    
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESlateBrushTileType::Type> Tiling;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESlateBrushMirrorType::Type> Mirroring;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESlateBrushImageType::Type> ImageType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDynamicallyLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasUObject: 1;
    
public:
    FSlateBrush();
};

