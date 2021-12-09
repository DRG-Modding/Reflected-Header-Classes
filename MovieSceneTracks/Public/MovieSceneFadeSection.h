#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFloatSection.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "MovieSceneFadeSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneFadeSection : public UMovieSceneFloatSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor FadeColor;
    
    UPROPERTY(EditAnywhere)
    uint8 bFadeAudio: 1;
    
    UMovieSceneFadeSection();
};

