#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AssetRegistry.h"
#include "AssetRegistryImpl.generated.h"

UCLASS(Transient)
class UAssetRegistryImpl : public UObject, public IAssetRegistry {
    GENERATED_BODY()
public:
    UAssetRegistryImpl();
};

