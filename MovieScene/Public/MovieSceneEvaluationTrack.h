#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EEvaluationMethod.h"
#include "MovieSceneTrackImplementationPtr.h"
#include "MovieSceneEvalTemplatePtr.h"
#include "MovieSceneEvaluationTrack.generated.h"

class UMovieSceneTrack;

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid ObjectBindingId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 EvaluationPriority;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EEvaluationMethod EvaluationMethod;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMovieSceneTrack> SourceTrack;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackImplementationPtr TrackTemplate;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName EvaluationGroup;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bEvaluateInPreroll: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bEvaluateInPostroll: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bTearDownPriority: 1;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTrack();
};

