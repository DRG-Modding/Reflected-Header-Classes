#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ClothingAssetCustomData.generated.h"

UCLASS(Abstract, MinimalAPI)
class UClothingAssetCustomData : public UObject {
    GENERATED_BODY()
public:
    UClothingAssetCustomData();
};

