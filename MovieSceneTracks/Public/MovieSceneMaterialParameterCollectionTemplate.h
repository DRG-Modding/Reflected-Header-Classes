#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParameterSectionTemplate.h"
#include "MovieSceneMaterialParameterCollectionTemplate.generated.h"

class UMaterialParameterCollection;

USTRUCT()
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMaterialParameterCollection* MPC;
    
public:
    MOVIESCENETRACKS_API FMovieSceneMaterialParameterCollectionTemplate();
};

