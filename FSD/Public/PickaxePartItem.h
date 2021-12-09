#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "PickaxePartItem.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPickaxePartItem : public UObject {
    GENERATED_BODY()
public:
    UPickaxePartItem();
};

