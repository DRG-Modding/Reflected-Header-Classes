#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Interval
#include "TunnelSettingItem.generated.h"

class UTunnelSegmentSetting;

USTRUCT(BlueprintType)
struct FTunnelSettingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTunnelSegmentSetting* SegmentSetting;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval SegmentSize;
    
    FSD_API FTunnelSettingItem();
};

