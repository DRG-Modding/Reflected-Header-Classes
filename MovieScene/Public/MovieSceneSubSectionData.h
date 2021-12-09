#pragma once
#include "CoreMinimal.h"
#include "ESectionEvaluationFlags.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneSubSectionData.generated.h"

class UMovieSceneSubSection;

USTRUCT()
struct FMovieSceneSubSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UMovieSceneSubSection> Section;
    
    UPROPERTY()
    FGuid ObjectBindingID;
    
    UPROPERTY()
    ESectionEvaluationFlags Flags;
    
    MOVIESCENE_API FMovieSceneSubSectionData();
};

