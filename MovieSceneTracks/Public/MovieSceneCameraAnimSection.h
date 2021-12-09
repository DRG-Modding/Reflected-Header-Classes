#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneCameraAnimSectionData.h"
#include "MovieSceneCameraAnimSection.generated.h"

class UCameraAnim;

UCLASS(MinimalAPI)
class UMovieSceneCameraAnimSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneCameraAnimSectionData AnimData;
    
private:
    UPROPERTY()
    UCameraAnim* CameraAnim;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY()
    float PlayScale;
    
    UPROPERTY()
    float BlendInTime;
    
    UPROPERTY()
    float BlendOutTime;
    
    UPROPERTY()
    bool bLooping;
    
public:
    UMovieSceneCameraAnimSection();
};

