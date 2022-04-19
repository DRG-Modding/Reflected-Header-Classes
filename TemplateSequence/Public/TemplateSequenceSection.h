#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubSection -FallbackName=MovieSceneSubSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "TemplateSectionPropertyScale.h"
#include "TemplateSequenceSection.generated.h"

UCLASS()
class TEMPLATESEQUENCE_API UTemplateSequenceSection : public UMovieSceneSubSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTemplateSectionPropertyScale> PropertyScales;
    
    UTemplateSequenceSection();
    
    // Fix for true pure virtual functions not being implemented
};

