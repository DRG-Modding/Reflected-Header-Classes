#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "MediaCaptureDevice.h"
#include "MediaBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    
    UFUNCTION(BlueprintCallable)
    static void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    
    UFUNCTION(BlueprintCallable)
    static void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    
    UMediaBlueprintFunctionLibrary();
};

