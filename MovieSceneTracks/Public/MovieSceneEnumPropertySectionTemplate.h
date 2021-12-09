#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneByteChannel
#include "MovieSceneEnumPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneByteChannel EnumCurve;
    
public:
    MOVIESCENETRACKS_API FMovieSceneEnumPropertySectionTemplate();
};

