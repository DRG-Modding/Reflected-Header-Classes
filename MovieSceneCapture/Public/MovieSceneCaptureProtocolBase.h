#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCaptureProtocolState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneCaptureProtocolBase.generated.h"

UCLASS(Abstract, Blueprintable, PerObjectConfig, Config=EditorPerProjectUserSettings)
class MOVIESCENECAPTURE_API UMovieSceneCaptureProtocolBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMovieSceneCaptureProtocolState State;
    
public:
    UMovieSceneCaptureProtocolBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCapturing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieSceneCaptureProtocolState GetState() const;
    
};

