#pragma once
#include "CoreMinimal.h"
#include "EDataSourceTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EDataSourceTypeEnum : uint8 {
    ChaosNiagara_DataSourceType_Collision,
    ChaosNiagara_DataSourceType_Breaking,
    ChaosNiagara_DataSourceType_Trailing,
    ChaosNiagara_Max,
};

