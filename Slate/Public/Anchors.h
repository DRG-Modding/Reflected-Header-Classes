#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "Anchors.generated.h"

USTRUCT(BlueprintType)
struct FAnchors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Maximum;
    
    SLATE_API FAnchors();
};

