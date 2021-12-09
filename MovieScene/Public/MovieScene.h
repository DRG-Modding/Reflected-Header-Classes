#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
#include "MovieSceneSignedObject.h"
#include "MovieSceneSpawnable.h"
#include "MovieSceneObjectBindingIDs.h"
#include "MovieScenePossessable.h"
#include "MovieSceneBinding.h"
#include "MovieSceneFrameRange.h"
#include "EMovieSceneEvaluationType.h"
#include "EUpdateClockSource.h"
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "MovieSceneMarkedFrame.h"
#include "MovieScene.generated.h"

class UMovieSceneTrack;

UCLASS(DefaultToInstanced)
class MOVIESCENE_API UMovieScene : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FMovieSceneSpawnable> Spawnables;
    
    UPROPERTY()
    TArray<FMovieScenePossessable> Possessables;
    
    UPROPERTY()
    TArray<FMovieSceneBinding> ObjectBindings;
    
    UPROPERTY()
    TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups;
    
    UPROPERTY(Export)
    TArray<UMovieSceneTrack*> MasterTracks;
    
    UPROPERTY(Instanced)
    UMovieSceneTrack* CameraCutTrack;
    
    UPROPERTY()
    FMovieSceneFrameRange SelectionRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PlaybackRange;
    
    UPROPERTY()
    FFrameRate TickResolution;
    
    UPROPERTY()
    FFrameRate DisplayRate;
    
    UPROPERTY()
    EMovieSceneEvaluationType EvaluationType;
    
    UPROPERTY()
    EUpdateClockSource ClockSource;
    
    UPROPERTY()
    FSoftObjectPath CustomClockSourcePath;
    
    UPROPERTY()
    TArray<FMovieSceneMarkedFrame> MarkedFrames;
    
public:
    UMovieScene();
};

