#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ESectionEvaluationFlags.h"
#include "MovieSceneSubSectionData.generated.h"

class UMovieSceneSubSection;

USTRUCT()
struct FMovieSceneSubSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMovieSceneSubSection> Section;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid ObjectBindingId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESectionEvaluationFlags Flags;
    
    MOVIESCENE_API FMovieSceneSubSectionData();
};

