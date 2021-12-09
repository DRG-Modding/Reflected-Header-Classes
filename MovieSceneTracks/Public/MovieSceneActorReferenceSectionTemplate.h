#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionData
#include "MovieSceneActorReferenceData.h"
#include "MovieSceneActorReferenceSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieScenePropertySectionData PropertyData;
    
    UPROPERTY()
    FMovieSceneActorReferenceData ActorReferenceData;
    
public:
    MOVIESCENETRACKS_API FMovieSceneActorReferenceSectionTemplate();
};

