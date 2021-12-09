#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "WidgetTransform.generated.h"

USTRUCT(BlueprintType)
struct FWidgetTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Shear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Angle;
    
    UMG_API FWidgetTransform();
};

