#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoExposureMethod -FallbackName=EAutoExposureMethod
#include "DatasmithPostProcessSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithPostProcessSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_WhiteTemp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ColorSaturation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_VignetteIntensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_FilmWhitePoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_AutoExposureMethod: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_CameraISO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_CameraShutterSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_DepthOfFieldFstop: 1;
    
    UPROPERTY(EditAnywhere)
    float WhiteTemp;
    
    UPROPERTY(EditAnywhere)
    float VignetteIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FilmWhitePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 ColorSaturation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;
    
    UPROPERTY(EditAnywhere)
    float CameraISO;
    
    UPROPERTY(EditAnywhere)
    float CameraShutterSpeed;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFstop;
    
    FDatasmithPostProcessSettingsTemplate();
};

