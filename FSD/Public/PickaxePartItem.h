#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PickaxePartItem.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPickaxePartItem : public UObject {
    GENERATED_BODY()
public:
    UPickaxePartItem();
};

