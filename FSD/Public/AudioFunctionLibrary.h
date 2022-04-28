#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AudioFunctionLibrary.generated.h"

class UObject;
class USoundClass;
class USoundMix;

UCLASS(Blueprintable)
class UAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static float SetSoundClassVolume(USoundClass* SoundClass, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void PushTimedSoundMix(UObject* contextObject, USoundMix* mix, float Duration);
    
    UFUNCTION(BlueprintPure)
    static float GetSoundClassVolume(USoundClass* SoundClass);
    
};

