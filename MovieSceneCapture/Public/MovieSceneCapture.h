#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MovieSceneCaptureInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject SoftClassPath
#include "MovieSceneCaptureSettings.h"
#include "MovieSceneCapture.generated.h"

class UMovieSceneCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;
class UMovieSceneAudioCaptureProtocolBase;

UCLASS(BlueprintType, PerObjectConfig, Config=EditorPerProjectUserSettings)
class MOVIESCENECAPTURE_API UMovieSceneCapture : public UObject, public IMovieSceneCaptureInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath ImageCaptureProtocolType;
    
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath AudioCaptureProtocolType;
    
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;
    
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FMovieSceneCaptureSettings Settings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bUseSeparateProcess;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    bool bCloseEditorWhenCaptureStarts;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    FString AdditionalCommandLineArguments;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient)
    FString InheritedCommandLineArguments;
    
    UFUNCTION(BlueprintCallable)
    void SetImageCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
    
    UMovieSceneCapture();
    
    // Fix for true pure virtual functions not being implemented
};

