#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AudioExtensions SpatializationPluginSourceSettingsBase
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "ITDSpatializationSourceSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SPATIALIZATION_API UITDSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bEnableILD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig)
    FRuntimeFloatCurve PanningIntensityOverDistance;
    
    UITDSpatializationSourceSettings();
};

