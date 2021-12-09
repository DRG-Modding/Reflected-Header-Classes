#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "LandscapeSplineInterpPoint.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeSplineInterpPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Center;
    
    UPROPERTY()
    FVector Left;
    
    UPROPERTY()
    FVector Right;
    
    UPROPERTY()
    FVector FalloffLeft;
    
    UPROPERTY()
    FVector FalloffRight;
    
    UPROPERTY()
    FVector LayerLeft;
    
    UPROPERTY()
    FVector LayerRight;
    
    UPROPERTY()
    FVector LayerFalloffLeft;
    
    UPROPERTY()
    FVector LayerFalloffRight;
    
    UPROPERTY()
    float StartEndFalloff;
    
    LANDSCAPE_API FLandscapeSplineInterpPoint();
};

