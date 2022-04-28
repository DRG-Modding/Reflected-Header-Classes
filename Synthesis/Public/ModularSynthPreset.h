#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ESynthFilterType.h"
#include "ESynthModEnvPatch.h"
#include "ESynthLFOPatchType.h"
#include "ESynth1OscType.h"
#include "ESynthLFOMode.h"
#include "ESynthLFOType.h"
#include "ESynthModEnvBiasPatch.h"
#include "ESynthFilterAlgorithm.h"
#include "ESynthStereoDelayMode.h"
#include "EpicSynth1Patch.h"
#include "ModularSynthPreset.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FModularSynthPreset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnablePolyphony: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynth1OscType Osc1Type;
    
    UPROPERTY(EditAnywhere)
    float Osc1Gain;
    
    UPROPERTY(EditAnywhere)
    float Osc1Octave;
    
    UPROPERTY(EditAnywhere)
    float Osc1Semitones;
    
    UPROPERTY(EditAnywhere)
    float Osc1Cents;
    
    UPROPERTY(EditAnywhere)
    float Osc1PulseWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynth1OscType Osc2Type;
    
    UPROPERTY(EditAnywhere)
    float Osc2Gain;
    
    UPROPERTY(EditAnywhere)
    float Osc2Octave;
    
    UPROPERTY(EditAnywhere)
    float Osc2Semitones;
    
    UPROPERTY(EditAnywhere)
    float Osc2Cents;
    
    UPROPERTY(EditAnywhere)
    float Osc2PulseWidth;
    
    UPROPERTY(EditAnywhere)
    float Portamento;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableUnison: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableOscillatorSync: 1;
    
    UPROPERTY(EditAnywhere)
    float Spread;
    
    UPROPERTY(EditAnywhere)
    float Pan;
    
    UPROPERTY(EditAnywhere)
    float LFO1Frequency;
    
    UPROPERTY(EditAnywhere)
    float LFO1Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthLFOType LFO1Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthLFOMode LFO1Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthLFOPatchType LFO1PatchType;
    
    UPROPERTY(EditAnywhere)
    float LFO2Frequency;
    
    UPROPERTY(EditAnywhere)
    float LFO2Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthLFOType LFO2Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthLFOMode LFO2Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthLFOPatchType LFO2PatchType;
    
    UPROPERTY(EditAnywhere)
    float GainDb;
    
    UPROPERTY(EditAnywhere)
    float AttackTime;
    
    UPROPERTY(EditAnywhere)
    float DecayTime;
    
    UPROPERTY(EditAnywhere)
    float SustainGain;
    
    UPROPERTY(EditAnywhere)
    float ReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthModEnvPatch ModEnvPatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthModEnvBiasPatch ModEnvBiasPatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInvertModulationEnvelope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInvertModulationEnvelopeBias: 1;
    
    UPROPERTY(EditAnywhere)
    float ModulationEnvelopeDepth;
    
    UPROPERTY(EditAnywhere)
    float ModulationEnvelopeAttackTime;
    
    UPROPERTY(EditAnywhere)
    float ModulationEnvelopeDecayTime;
    
    UPROPERTY(EditAnywhere)
    float ModulationEnvelopeSustainGain;
    
    UPROPERTY(EditAnywhere)
    float ModulationEnvelopeReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLegato: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRetrigger: 1;
    
    UPROPERTY(EditAnywhere)
    float FilterFrequency;
    
    UPROPERTY(EditAnywhere)
    float FilterQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthFilterAlgorithm FilterAlgorithm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStereoDelayEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthStereoDelayMode StereoDelayMode;
    
    UPROPERTY(EditAnywhere)
    float StereoDelayTime;
    
    UPROPERTY(EditAnywhere)
    float StereoDelayFeedback;
    
    UPROPERTY(EditAnywhere)
    float StereoDelayWetlevel;
    
    UPROPERTY(EditAnywhere)
    float StereoDelayRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChorusEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    float ChorusDepth;
    
    UPROPERTY(EditAnywhere)
    float ChorusFeedback;
    
    UPROPERTY(EditAnywhere)
    float ChorusFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEpicSynth1Patch> Patches;
    
    FModularSynthPreset();
};

