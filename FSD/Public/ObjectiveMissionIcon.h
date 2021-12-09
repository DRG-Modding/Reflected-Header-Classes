#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "ObjectiveMissionIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FObjectiveMissionIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Tint;
    
    FSD_API FObjectiveMissionIcon();
};

