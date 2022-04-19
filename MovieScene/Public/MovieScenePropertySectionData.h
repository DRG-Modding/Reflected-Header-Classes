#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePropertySectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PropertyPath;
    
    MOVIESCENE_API FMovieScenePropertySectionData();
};

