#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieSceneSpawnable.h"
#include "MovieScenePossessable.h"
#include "MovieSceneFrameRange.h"
#include "MovieSceneBinding.h"
#include "MovieSceneObjectBindingIDs.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "EMovieSceneEvaluationType.h"
#include "EUpdateClockSource.h"
#include "MovieSceneMarkedFrame.h"
#include "MovieScene.generated.h"

class UMovieSceneTrack;

UCLASS(DefaultToInstanced)
class MOVIESCENE_API UMovieScene : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneSpawnable> Spawnables;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieScenePossessable> Possessables;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneBinding> ObjectBindings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneTrack*> MasterTracks;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneTrack* CameraCutTrack;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange SelectionRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange PlaybackRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameRate TickResolution;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameRate DisplayRate;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMovieSceneEvaluationType EvaluationType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUpdateClockSource ClockSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CustomClockSourcePath;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneMarkedFrame> MarkedFrames;
    
public:
    UMovieScene();
};

