#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "AudioCaptureFunctionLibrary.generated.h"

class UAudioCapture;

UCLASS(BlueprintType)
class AUDIOCAPTURE_API UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UAudioCapture* CreateAudioCapture();
    
    UAudioCaptureFunctionLibrary();
};

