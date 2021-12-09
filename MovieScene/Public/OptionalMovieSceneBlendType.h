#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBlendType.h"
#include "OptionalMovieSceneBlendType.generated.h"

USTRUCT(BlueprintType)
struct FOptionalMovieSceneBlendType {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
    UPROPERTY()
    bool bIsValid;
    
public:
    MOVIESCENE_API FOptionalMovieSceneBlendType();
};

