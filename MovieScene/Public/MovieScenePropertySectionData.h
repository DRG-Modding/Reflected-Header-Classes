#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePropertySectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyPath;
    
    MOVIESCENE_API FMovieScenePropertySectionData();
};

