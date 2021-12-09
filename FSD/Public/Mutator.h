#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "Mutator.generated.h"

UCLASS(Abstract, EditInlineNew)
class FSD_API UMutator : public UDataAsset {
    GENERATED_BODY()
public:
    UMutator();
};

