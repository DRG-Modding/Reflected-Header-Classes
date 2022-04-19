#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectPathChannelKeyValue.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneObjectPathChannelKeyValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> SoftPtr;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* HardPtr;
    
public:
    FMovieSceneObjectPathChannelKeyValue();
};

