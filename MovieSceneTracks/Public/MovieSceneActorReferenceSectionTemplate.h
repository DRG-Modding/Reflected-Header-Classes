#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionData -FallbackName=MovieScenePropertySectionData
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneActorReferenceData.h"
#include "MovieSceneActorReferenceSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieScenePropertySectionData PropertyData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData ActorReferenceData;
    
public:
    MOVIESCENETRACKS_API FMovieSceneActorReferenceSectionTemplate();
};

