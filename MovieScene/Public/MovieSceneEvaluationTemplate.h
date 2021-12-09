#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneEvaluationTrack.h"
#include "MovieSceneEvaluationField.h"
#include "MovieSceneSequenceHierarchy.h"
#include "MovieSceneEvaluationTemplateSerialNumber.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneTemplateGenerationLedger.h"
#include "MovieSceneTrackFieldData.h"
#include "MovieSceneSubSectionFieldData.h"
#include "MovieSceneEvaluationTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;
    
public:
    UPROPERTY()
    FMovieSceneEvaluationField EvaluationField;
    
    UPROPERTY()
    FMovieSceneSequenceHierarchy Hierarchy;
    
    UPROPERTY()
    FGuid SequenceSignature;
    
    UPROPERTY()
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;
    
private:
    UPROPERTY()
    FMovieSceneTemplateGenerationLedger TemplateLedger;
    
    UPROPERTY()
    FMovieSceneTrackFieldData TrackFieldData;
    
    UPROPERTY()
    FMovieSceneSubSectionFieldData SubSectionFieldData;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTemplate();
};

