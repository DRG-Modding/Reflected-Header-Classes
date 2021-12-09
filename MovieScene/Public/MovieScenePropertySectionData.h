#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePropertySectionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    FString PropertyPath;
    
    UPROPERTY()
    FName FunctionName;
    
    UPROPERTY()
    FName NotifyFunctionName;
    
    MOVIESCENE_API FMovieScenePropertySectionData();
};

