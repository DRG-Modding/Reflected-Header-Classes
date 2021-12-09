#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ResourceCreator.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class UResourceCreator : public UDataAsset {
    GENERATED_BODY()
public:
    UResourceCreator();
};

