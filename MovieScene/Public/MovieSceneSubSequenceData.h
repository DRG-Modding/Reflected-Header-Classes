#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceTransform.h"
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
#include "MovieSceneSequenceInstanceDataPtr.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneFrameRange.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneSubSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSubSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSoftObjectPath Sequence;
    
    UPROPERTY()
    FMovieSceneSequenceTransform RootToSequenceTransform;
    
    UPROPERTY()
    FFrameRate TickResolution;
    
    UPROPERTY()
    FMovieSceneSequenceID DeterministicSequenceID;
    
    UPROPERTY()
    FMovieSceneFrameRange PlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange FullPlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange UnwarpedPlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PreRollRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PostRollRange;
    
    UPROPERTY()
    int32 HierarchicalBias;
    
    UPROPERTY()
    FMovieSceneSequenceInstanceDataPtr InstanceData;
    
private:
    UPROPERTY()
    FGuid SubSectionSignature;
    
    UPROPERTY()
    FMovieSceneSequenceTransform OuterToInnerTransform;
    
public:
    MOVIESCENE_API FMovieSceneSubSequenceData();
};

