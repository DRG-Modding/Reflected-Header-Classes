#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AudioCaptureFunctionLibrary.generated.h"

class UAudioCapture;

UCLASS(BlueprintType)
class AUDIOCAPTURE_API UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioCaptureFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UAudioCapture* CreateAudioCapture();
    
};

