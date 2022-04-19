#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEasingSettings.generated.h"

class UMovieSceneEasingFunction;
class IMovieSceneEasingFunction;

USTRUCT(BlueprintType)
struct FMovieSceneEasingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 AutoEaseInDuration;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 AutoEaseOutDuration;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMovieSceneEasingFunction> EaseIn;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bManualEaseIn;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ManualEaseInDuration;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMovieSceneEasingFunction> EaseOut;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bManualEaseOut;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ManualEaseOutDuration;
    
    MOVIESCENE_API FMovieSceneEasingSettings();
};

