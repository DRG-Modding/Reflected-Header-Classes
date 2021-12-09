#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EMovieSceneCaptureProtocolState.h"
#include "MovieSceneCaptureProtocolBase.generated.h"

UCLASS(Abstract, BlueprintType, PerObjectConfig, Config=EditorPerProjectUserSettings)
class MOVIESCENECAPTURE_API UMovieSceneCaptureProtocolBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    EMovieSceneCaptureProtocolState State;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCapturing() const;
    
    UFUNCTION(BlueprintPure)
    EMovieSceneCaptureProtocolState GetState() const;
    
    UMovieSceneCaptureProtocolBase();
};

