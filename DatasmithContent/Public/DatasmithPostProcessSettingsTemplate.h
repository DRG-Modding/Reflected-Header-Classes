#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector4
//CROSS-MODULE INCLUDE: Engine EAutoExposureMethod
#include "DatasmithPostProcessSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithPostProcessSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bOverride_WhiteTemp: 1;
    
    UPROPERTY()
    uint8 bOverride_ColorSaturation: 1;
    
    UPROPERTY()
    uint8 bOverride_VignetteIntensity: 1;
    
    UPROPERTY()
    uint8 bOverride_FilmWhitePoint: 1;
    
    UPROPERTY()
    uint8 bOverride_AutoExposureMethod: 1;
    
    UPROPERTY()
    uint8 bOverride_CameraISO: 1;
    
    UPROPERTY()
    uint8 bOverride_CameraShutterSpeed: 1;
    
    UPROPERTY()
    uint8 bOverride_DepthOfFieldFstop: 1;
    
    UPROPERTY()
    float WhiteTemp;
    
    UPROPERTY()
    float VignetteIntensity;
    
    UPROPERTY()
    FLinearColor FilmWhitePoint;
    
    UPROPERTY()
    FVector4 ColorSaturation;
    
    UPROPERTY()
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;
    
    UPROPERTY()
    float CameraISO;
    
    UPROPERTY()
    float CameraShutterSpeed;
    
    UPROPERTY()
    float DepthOfFieldFstop;
    
    FDatasmithPostProcessSettingsTemplate();
};

