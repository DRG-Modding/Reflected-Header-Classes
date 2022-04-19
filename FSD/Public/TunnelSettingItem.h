#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "TunnelSettingItem.generated.h"

class UTunnelSegmentSetting;

USTRUCT(BlueprintType)
struct FTunnelSettingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTunnelSegmentSetting* SegmentSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval SegmentSize;
    
    FSD_API FTunnelSettingItem();
};

