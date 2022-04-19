#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName PropertyPath;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCanUseClassLookup;
    
    MOVIESCENE_API FMovieScenePropertyBinding();
};

