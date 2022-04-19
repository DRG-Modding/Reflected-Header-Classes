#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBlendType.h"
#include "OptionalMovieSceneBlendType.generated.h"

USTRUCT(BlueprintType)
struct FOptionalMovieSceneBlendType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMovieSceneBlendType BlendType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    MOVIESCENE_API FOptionalMovieSceneBlendType();
};

