#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: ClothingSystemRuntimeInterface ClothConfigBase
#include "ClothConfigCommon.generated.h"

UCLASS(Abstract)
class CLOTHINGSYSTEMRUNTIMECOMMON_API UClothConfigCommon : public UClothConfigBase {
    GENERATED_BODY()
public:
    UClothConfigCommon();
};
