#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ECameraAnimPlaySpace
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneCameraShakeSectionData.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "MovieSceneCameraShakeSection.generated.h"

class UCameraShake;

UCLASS(MinimalAPI)
class UMovieSceneCameraShakeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneCameraShakeSectionData ShakeData;
    
    UPROPERTY()
    TSubclassOf<UCameraShake> ShakeClass;
    
    UPROPERTY()
    float PlayScale;
    
    UPROPERTY()
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
    
    UPROPERTY()
    FRotator UserDefinedPlaySpace;
    
    UMovieSceneCameraShakeSection();
};

