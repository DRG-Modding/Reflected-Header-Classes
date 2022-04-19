#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EUMGSequencePlayMode -FallbackName=EUMGSequencePlayMode
#include "WidgetAnimationSettings.generated.h"

USTRUCT(BlueprintType)
struct FWidgetAnimationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreState;
    
    FSD_API FWidgetAnimationSettings();
};

