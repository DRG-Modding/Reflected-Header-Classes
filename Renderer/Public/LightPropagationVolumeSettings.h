#pragma once
#include "CoreMinimal.h"
#include "LightPropagationVolumeSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightPropagationVolumeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVDirectionalOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVDirectionalOcclusionRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVDiffuseOcclusionExponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVSpecularOcclusionExponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVDiffuseOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVSpecularOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVSecondaryOcclusionIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVSecondaryBounceIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVGeometryVolumeBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVVplInjectionBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_LPVEmissiveInjectionIntensity: 1;
    
    UPROPERTY(EditAnywhere, Interp)
    float LPVIntensity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVVplInjectionBias;
    
    UPROPERTY(EditAnywhere)
    float LPVSize;
    
    UPROPERTY(EditAnywhere, Interp)
    float LPVSecondaryOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVSecondaryBounceIntensity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVGeometryVolumeBias;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVEmissiveInjectionIntensity;
    
    UPROPERTY(EditAnywhere, Interp)
    float LPVDirectionalOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVDirectionalOcclusionRadius;
    
    UPROPERTY(EditAnywhere, Interp)
    float LPVDiffuseOcclusionExponent;
    
    UPROPERTY(EditAnywhere, Interp)
    float LPVSpecularOcclusionExponent;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVDiffuseOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVSpecularOcclusionIntensity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVFadeRange;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp)
    float LPVDirectionalOcclusionFadeRange;
    
    RENDERER_API FLightPropagationVolumeSettings();
};

