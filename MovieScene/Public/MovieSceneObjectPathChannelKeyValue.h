#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectPathChannelKeyValue.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneObjectPathChannelKeyValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSoftObjectPtr<UObject> SoftPtr;
    
    UPROPERTY()
    UObject* HardPtr;
    
public:
    FMovieSceneObjectPathChannelKeyValue();
};

