#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTangentData.h"
//CROSS-MODULE INCLUDE: Engine ERichCurveTangentMode
//CROSS-MODULE INCLUDE: Engine ERichCurveInterpMode
#include "MovieSceneFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneTangentData Tangent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY()
    uint8 PaddingByte;
    
    MOVIESCENE_API FMovieSceneFloatValue();
};

