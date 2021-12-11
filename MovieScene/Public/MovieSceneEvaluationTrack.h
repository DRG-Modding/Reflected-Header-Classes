#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneEvaluationTrackSegments.h"
#include "EEvaluationMethod.h"
#include "MovieSceneEvalTemplatePtr.h"
#include "SectionEvaluationDataTree.h"
#include "MovieSceneTrackImplementationPtr.h"
#include "MovieSceneEvaluationTrack.generated.h"

class UMovieSceneTrack;

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid ObjectBindingID;
    
    UPROPERTY()
    uint16 EvaluationPriority;
    
    UPROPERTY()
    EEvaluationMethod EvaluationMethod;
    
    UPROPERTY()
    FMovieSceneEvaluationTrackSegments Segments;
    
    UPROPERTY(Export)
    UMovieSceneTrack* SourceTrack;
    
    UPROPERTY()
    FSectionEvaluationDataTree EvaluationTree;
    
    UPROPERTY()
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;
    
    UPROPERTY()
    FMovieSceneTrackImplementationPtr TrackTemplate;
    
    UPROPERTY()
    FName EvaluationGroup;
    
    UPROPERTY()
    uint8 bEvaluateInPreroll: 1;
    
    UPROPERTY()
    uint8 bEvaluateInPostroll: 1;
    
    UPROPERTY()
    uint8 bTearDownPriority: 1;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTrack();
};

