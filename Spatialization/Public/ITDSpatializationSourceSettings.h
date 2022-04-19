#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SpatializationPluginSourceSettingsBase -FallbackName=SpatializationPluginSourceSettingsBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "ITDSpatializationSourceSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SPATIALIZATION_API UITDSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bEnableILD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PanningIntensityOverDistance;
    
    UITDSpatializationSourceSettings();
};

