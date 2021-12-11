#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "ESynth1OscType.h"
#include "ESynthModEnvPatch.h"
#include "ESynthLFOPatchType.h"
#include "ESynthLFOMode.h"
#include "ESynthLFOType.h"
#include "ESynthFilterType.h"
#include "ESynthStereoDelayMode.h"
#include "ESynthModEnvBiasPatch.h"
#include "ESynthFilterAlgorithm.h"
#include "EpicSynth1Patch.h"
#include "ModularSynthPreset.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FModularSynthPreset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnablePolyphony: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynth1OscType Osc1Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc1Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc1Octave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc1Semitones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc1Cents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc1PulseWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynth1OscType Osc2Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc2Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc2Octave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc2Semitones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc2Cents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Osc2PulseWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Portamento;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableUnison: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableOscillatorSync: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LFO1Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LFO1Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthLFOType LFO1Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthLFOMode LFO1Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthLFOPatchType LFO1PatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LFO2Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LFO2Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthLFOType LFO2Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthLFOMode LFO2Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthLFOPatchType LFO2PatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SustainGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthModEnvPatch ModEnvPatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthModEnvBiasPatch ModEnvBiasPatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInvertModulationEnvelope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInvertModulationEnvelopeBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ModulationEnvelopeDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ModulationEnvelopeAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ModulationEnvelopeDecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ModulationEnvelopeSustainGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ModulationEnvelopeReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLegato: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRetrigger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthFilterAlgorithm FilterAlgorithm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStereoDelayEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthStereoDelayMode StereoDelayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoDelayFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoDelayWetlevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoDelayRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bChorusEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChorusDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChorusFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChorusFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEpicSynth1Patch> Patches;
    
    FModularSynthPreset();
};

