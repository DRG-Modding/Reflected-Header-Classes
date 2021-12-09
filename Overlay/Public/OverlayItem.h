#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Timespan
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "OverlayItem.generated.h"

USTRUCT(BlueprintType)
struct OVERLAY_API FOverlayItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimespan StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimespan EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Position;
    
    FOverlayItem();
};

