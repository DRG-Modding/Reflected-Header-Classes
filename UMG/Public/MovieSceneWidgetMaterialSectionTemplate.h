#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSectionTemplate -FallbackName=MovieSceneParameterSectionTemplate
#include "MovieSceneWidgetMaterialSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FName> BrushPropertyNamePath;
    
public:
    UMG_API FMovieSceneWidgetMaterialSectionTemplate();
};

