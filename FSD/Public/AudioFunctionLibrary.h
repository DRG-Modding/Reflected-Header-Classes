#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "AudioFunctionLibrary.generated.h"

class USoundClass;
class USoundMix;
class UObject;

UCLASS(BlueprintType)
class UAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static float SetSoundClassVolume(USoundClass* SoundClass, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void PushTimedSoundMix(UObject* contextObject, USoundMix* mix, float Duration);
    
    UFUNCTION(BlueprintPure)
    static float GetSoundClassVolume(USoundClass* SoundClass);
    
    UAudioFunctionLibrary();
};

