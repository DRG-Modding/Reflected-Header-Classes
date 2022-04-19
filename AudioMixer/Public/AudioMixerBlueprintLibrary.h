#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTPeakInterpolationMethod -FallbackName=EFFTPeakInterpolationMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTSize -FallbackName=EFFTSize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioRecordingExportType -FallbackName=EAudioRecordingExportType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SourceEffectChainEntry -FallbackName=SourceEffectChainEntry
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTWindowType -FallbackName=EFFTWindowType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioSpectrumType -FallbackName=EAudioSpectrumType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioSpectrumBandPresetType -FallbackName=EAudioSpectrumBandPresetType
#include "OnSoundLoadCompleteDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundSubmixSpectralAnalysisBandSettings -FallbackName=SoundSubmixSpectralAnalysisBandSettings
#include "EMusicalNoteName.h"
#include "AudioMixerBlueprintLibrary.generated.h"

class UObject;
class USoundWave;
class USoundEffectSubmixPreset;
class USoundSubmix;
class UAudioBus;
class USoundEffectSourcePresetChain;
class USoundCue;

UCLASS(BlueprintType)
class AUDIOMIXER_API UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioMixerBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static float TrimAudioCache(float InMegabytesToFree);
    
    UFUNCTION(BlueprintCallable)
    static USoundWave* StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, const FString& Name, const FString& Path, USoundSubmix* SubmixToRecord, USoundWave* ExistingSoundWaveToOverwrite);
    
    UFUNCTION(BlueprintCallable)
    static void StopAudioBus(const UObject* WorldContextObject, UAudioBus* AudioBus);
    
    UFUNCTION(BlueprintCallable)
    static void StopAnalyzingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToStopAnalyzing);
    
    UFUNCTION(BlueprintCallable)
    static void StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration, USoundSubmix* SubmixToRecord);
    
    UFUNCTION(BlueprintCallable)
    static void StartAudioBus(const UObject* WorldContextObject, UAudioBus* AudioBus);
    
    UFUNCTION(BlueprintCallable)
    static void StartAnalyzingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubmixEffectChainOverride(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);
    
    UFUNCTION(BlueprintCallable)
    static void SetBypassSourceEffectChainEntry(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeRecordingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToPause);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceSubmixEffect(const UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceSoundEffectSubmix(const UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSubmixEffectPresetAtIndex(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSubmixEffectPreset(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSubmixEffectAtIndex(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSubmixEffect(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSourceEffectFromPresetChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveMasterSubmixEffect(const UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void PrimeSoundForPlayback(USoundWave* SoundWave, const FOnSoundLoadComplete OnLoadCompletion);
    
    UFUNCTION(BlueprintCallable)
    static void PrimeSoundCueForPlayback(USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable)
    static void PauseRecordingOutput(const UObject* WorldContextObject, USoundSubmix* SubmixToPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAudioBusActive(const UObject* WorldContextObject, UAudioBus* AudioBus);
    
    UFUNCTION(BlueprintCallable)
    static void GetPhaseForFrequencies(const UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Phases, USoundSubmix* SubmixToAnalyze);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumberOfEntriesInSourceEffectChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain);
    
    UFUNCTION(BlueprintCallable)
    static void GetMagnitudeForFrequencies(const UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Magnitudes, USoundSubmix* SubmixToAnalyze);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSubmixEffects(const UObject* WorldContextObject, USoundSubmix* SoundSubmix);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSubmixEffectChainOverride(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, float FadeTimeSec);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMasterSubmixEffects(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddSubmixEffect(const UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    
    UFUNCTION(BlueprintCallable)
    static void AddSourceEffectToPresetChain(const UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
    
    UFUNCTION(BlueprintCallable)
    static void AddMasterSubmixEffect(const UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
    
};

