#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "CrowdManagerBase.generated.h"

UCLASS(Abstract, Transient)
class NAVIGATIONSYSTEM_API UCrowdManagerBase : public UObject {
    GENERATED_BODY()
public:
    UCrowdManagerBase();
};

