#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ESectionEvaluationFlags.h"
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

