#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EFFTWindowType.h"
//CROSS-MODULE INCLUDE: Engine EAudioRecordingExportType
#include "EFFTPeakInterpolationMethod.h"
#include "EFFTSize.h"
//CROSS-MODULE INCLUDE: Engine SourceEffectChainEntry
#include "AudioMixerBlueprintLibrary.generated.h"

class USoundWave;
class UObject;
class USoundSubmix;
class USoundEffectSourcePresetChain;
class USoundEffectSubmixPreset;
class USoundCue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAudioMixerBlueprintLibraryOnLoadCompletion, const USoundWave*, LoadedSoundWave, const bool, WasCancelled);

UCLASS(BlueprintType)
class AUDIOMIXER_API UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static float TrimAudioCache(float InMegabytesToFree);
    
    UFUNCTION(BlueprintCallable)
    static USoundWave* StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, const FString& Name, const FString& Path, USoundSubmix* SubmixToRecord, USoundWave* ExistingSoundWaveToOverwrite);
    
    UFUNCTION(BlueprintCallable)
    static void StopAnalyzingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToStopAnalyzing);
    
    UFUNCTION(BlueprintCallable)
    static void StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration, USoundSubmix* SubmixToRecord);
    
    UFUNCTION(BlueprintCallable)
    static void StartAnalyzingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetBypassSourceEffectChainEntry(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeRecordingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToPause);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceSoundEffectSubmix(const UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSubmixEffectPresetAtIndex(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSubmixEffectPreset(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSourceEffectFromPresetChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveMasterSubmixEffect(const UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void PrimeSoundForPlayback(USoundWave* SoundWave, const FAudioMixerBlueprintLibraryOnLoadCompletion OnLoadCompletion);
    
    UFUNCTION(BlueprintCallable)
    static void PrimeSoundCueForPlayback(USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable)
    static void PauseRecordingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToPause);
    
    UFUNCTION(BlueprintCallable)
    static void GetPhaseForFrequencies(const UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Phases, USoundSubmix* SubmixToAnalyze);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumberOfEntriesInSourceEffectChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain);
    
    UFUNCTION(BlueprintCallable)
    static void GetMagnitudeForFrequencies(const UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Magnitudes, USoundSubmix* SubmixToAnalyze);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSubmixEffects(const UObject* WorldContextObject, USoundSubmix* SoundSubmix);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMasterSubmixEffects(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddSubmixEffect(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void AddSourceEffectToPresetChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
    
    UFUNCTION(BlueprintCallable)
    static void AddMasterSubmixEffect(const UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UAudioMixerBlueprintLibrary();
};

