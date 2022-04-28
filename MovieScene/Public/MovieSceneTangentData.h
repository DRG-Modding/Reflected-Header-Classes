#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveTangentWeightMode -FallbackName=ERichCurveTangentWeightMode
#include "MovieSceneTangentData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTangentData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ArriveTangent;
    
    UPROPERTY(EditAnywhere)
    float LeaveTangent;
    
    UPROPERTY(EditAnywhere)
    float ArriveTangentWeight;
    
    UPROPERTY(EditAnywhere)
    float LeaveTangentWeight;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    
    MOVIESCENE_API FMovieSceneTangentData();
};

