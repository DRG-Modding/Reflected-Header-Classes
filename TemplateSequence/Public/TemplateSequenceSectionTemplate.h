#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvaluationOperand
#include "TemplateSequenceSectionTemplate.generated.h"

USTRUCT()
struct FTemplateSequenceSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FGuid OuterBindingId;
    
    UPROPERTY()
    FMovieSceneEvaluationOperand InnerOperand;
    
public:
    TEMPLATESEQUENCE_API FTemplateSequenceSectionTemplate();
};

