#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ClothSharedSimConfigBase.generated.h"

UCLASS(Abstract, Deprecated, NotPlaceable)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UDEPRECATED_ClothSharedSimConfigBase : public UObject {
    GENERATED_BODY()
public:
    UDEPRECATED_ClothSharedSimConfigBase();
};

