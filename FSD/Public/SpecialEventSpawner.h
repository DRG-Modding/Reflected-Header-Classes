#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SpecialEventSpawner.generated.h"

UCLASS(Abstract, EditInlineNew)
class USpecialEventSpawner : public UObject {
    GENERATED_BODY()
public:
    USpecialEventSpawner();
};

