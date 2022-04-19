#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundAttenuationSettings -FallbackName=SoundAttenuationSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundSubmixSendInfo -FallbackName=SoundSubmixSendInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundSourceBusSendInfo -FallbackName=SoundSourceBusSendInfo
#include "OnSynthEnvelopeValueDelegate.h"
#include "SynthComponent.generated.h"

class UAudioComponent;
class USoundAttenuation;
class USoundConcurrency;
class USoundClass;
class USoundEffectSourcePresetChain;
class USoundSubmixBase;
class USynthSound;

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class AUDIOMIXER_API USynthComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowSpatialization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableBusSends: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableBaseSubmix: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSubmixSends: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAttenuationSettings AttenuationOverrides;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USoundConcurrency* ConcurrencySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USoundConcurrency*> ConcurrencySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* SoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* SourceEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmixBase* SoundSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundSourceBusSendInfo> BusSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsUISound: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bIsPreviewSound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerReleaseTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnSynthEnvelopeValue OnAudioEnvelopeValue;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USynthSound* Synth;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    USynthComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(float VolumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputToBusOnly(bool bInOutputToBusOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
};

