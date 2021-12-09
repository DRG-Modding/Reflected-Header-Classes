#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieSceneTracks MovieSceneParameterSectionTemplate
#include "MovieSceneWidgetMaterialSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FName> BrushPropertyNamePath;
    
public:
    UMG_API FMovieSceneWidgetMaterialSectionTemplate();
};

