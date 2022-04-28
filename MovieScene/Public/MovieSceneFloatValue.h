#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTangentData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveTangentMode -FallbackName=ERichCurveTangentMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveInterpMode -FallbackName=ERichCurveInterpMode
#include "MovieSceneFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTangentData Tangent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY(EditAnywhere)
    uint8 PaddingByte;
    
    MOVIESCENE_API FMovieSceneFloatValue();
};

