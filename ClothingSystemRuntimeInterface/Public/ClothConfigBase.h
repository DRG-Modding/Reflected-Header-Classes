#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ClothConfigBase.generated.h"

UCLASS(Abstract)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothConfigBase : public UObject {
    GENERATED_BODY()
public:
    UClothConfigBase();
};

