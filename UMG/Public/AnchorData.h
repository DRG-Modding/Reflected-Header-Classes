#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: Slate Anchors
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "AnchorData.generated.h"

USTRUCT(BlueprintType)
struct FAnchorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Offsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnchors Anchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Alignment;
    
    UMG_API FAnchorData();
};

