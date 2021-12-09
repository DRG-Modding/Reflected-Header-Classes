#pragma once
#include "CoreMinimal.h"
#include "LightPropagationVolumeSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightPropagationVolumeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVDirectionalOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVDirectionalOcclusionRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVDiffuseOcclusionExponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVSpecularOcclusionExponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVDiffuseOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVSpecularOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVSecondaryOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVSecondaryBounceIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVGeometryVolumeBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVVplInjectionBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_LPVEmissiveInjectionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVVplInjectionBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LPVSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVSecondaryOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVSecondaryBounceIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVGeometryVolumeBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVEmissiveInjectionIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDirectionalOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDirectionalOcclusionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDiffuseOcclusionExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LPVSpecularOcclusionExponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDiffuseOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVSpecularOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVFadeRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LPVDirectionalOcclusionFadeRange;
    
    RENDERER_API FLightPropagationVolumeSettings();
};

