#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEasingSettings.generated.h"

class UMovieSceneEasingFunction;
class IMovieSceneEasingFunction;

USTRUCT(BlueprintType)
struct FMovieSceneEasingSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 AutoEaseInDuration;
    
    UPROPERTY()
    int32 AutoEaseOutDuration;
    
    UPROPERTY()
    TScriptInterface<IMovieSceneEasingFunction> EaseIn;
    
    UPROPERTY()
    bool bManualEaseIn;
    
    UPROPERTY()
    int32 ManualEaseInDuration;
    
    UPROPERTY()
    TScriptInterface<IMovieSceneEasingFunction> EaseOut;
    
    UPROPERTY()
    bool bManualEaseOut;
    
    UPROPERTY()
    int32 ManualEaseOutDuration;
    
    MOVIESCENE_API FMovieSceneEasingSettings();
};

