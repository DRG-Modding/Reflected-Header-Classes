#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE: Engine EDetachmentRule
//CROSS-MODULE INCLUDE: Engine EAttachmentRule
#include "MovieScene3DAttachSectionTemplate.generated.h"

USTRUCT()
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectBindingID AttachBindingID;
    
    UPROPERTY()
    FName AttachSocketName;
    
    UPROPERTY()
    FName AttachComponentName;
    
    UPROPERTY()
    EAttachmentRule AttachmentLocationRule;
    
    UPROPERTY()
    EAttachmentRule AttachmentRotationRule;
    
    UPROPERTY()
    EAttachmentRule AttachmentScaleRule;
    
    UPROPERTY()
    EDetachmentRule DetachmentLocationRule;
    
    UPROPERTY()
    EDetachmentRule DetachmentRotationRule;
    
    UPROPERTY()
    EDetachmentRule DetachmentScaleRule;
    
    MOVIESCENETRACKS_API FMovieScene3DAttachSectionTemplate();
};

