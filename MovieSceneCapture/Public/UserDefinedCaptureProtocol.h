#pragma once
#include "CoreMinimal.h"
#include "MovieSceneImageCaptureProtocolBase.h"
#include "CapturedPixelsID.h"
#include "CapturedPixels.h"
#include "FrameMetrics.h"
#include "UserDefinedCaptureProtocol.generated.h"

class UTexture;
class UWorld;

UCLASS(Abstract, Blueprintable)
class MOVIESCENECAPTURE_API UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UWorld* World;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopCapturingFinalPixels();
    
    UFUNCTION(BlueprintCallable)
    void StartCapturingFinalPixels(const FCapturedPixelsID& StreamID);
    
    UFUNCTION(BlueprintCallable)
    void ResolveBuffer(UTexture* Buffer, const FCapturedPixelsID& BufferID);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWarmUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTick();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartCapture();
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnSetup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreTick();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPixelsReceived(const FCapturedPixels& Pixels, const FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPauseCapture();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinalize();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCaptureFrame();
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnCanFinalize() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginFinalize();
    
public:
    UFUNCTION(BlueprintPure)
    FFrameMetrics GetCurrentFrameMetrics() const;
    
    UFUNCTION(BlueprintPure)
    FString GenerateFilename(const FFrameMetrics& InFrameMetrics) const;
    
    UUserDefinedCaptureProtocol();
};

