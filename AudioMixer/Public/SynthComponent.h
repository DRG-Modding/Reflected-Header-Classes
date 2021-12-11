#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
//CROSS-MODULE INCLUDE: Engine SoundAttenuationSettings
//CROSS-MODULE INCLUDE: Engine SoundSourceBusSendInfo
//CROSS-MODULE INCLUDE: Engine SoundSubmixSendInfo
//CROSS-MODULE INCLUDE: AudioExtensions SoundModulation
#include "SynthComponent.generated.h"

class USoundClass;
class USoundAttenuation;
class USoundConcurrency;
class USoundEffectSourcePresetChain;
class USoundSubmixBase;
class USynthSound;
class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSynthComponentOnAudioEnvelopeValue, const float, EnvelopeValue);

UCLASS(BlueprintType)
class AUDIOMIXER_API USynthComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowSpatialization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOutputToBusOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundAttenuationSettings AttenuationOverrides;
    
    UPROPERTY()
    USoundConcurrency* ConcurrencySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<USoundConcurrency*> ConcurrencySet;
    
    UPROPERTY(EditAnywhere)
    USoundClass* SoundClass;
    
    UPROPERTY(EditAnywhere)
    USoundEffectSourcePresetChain* SourceEffectChain;
    
    UPROPERTY(EditAnywhere)
    USoundSubmixBase* SoundSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSourceBusSendInfo> BusSends;
    
    UPROPERTY(EditAnywhere)
    FSoundModulation Modulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsUISound: 1;
    
    UPROPERTY()
    uint8 bIsPreviewSound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerReleaseTime;
    
    UPROPERTY(BlueprintAssignable)
    FSynthComponentOnAudioEnvelopeValue OnAudioEnvelopeValue;
    
private:
    UPROPERTY(Transient)
    USynthSound* Synth;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* AudioComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(float VolumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    USynthComponent();
};

