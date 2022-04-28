#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CollectableResourceCreator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCollectableResourceCreator : public UObject {
    GENERATED_BODY()
public:
    UCollectableResourceCreator();
};

