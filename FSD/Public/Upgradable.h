#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "Upgradable.generated.h"

class UItemUpgrade;

UINTERFACE(Blueprintable)
class UUpgradable : public UInterface {
    GENERATED_BODY()
};

class IUpgradable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Upgraded(const TArray<UItemUpgrade*>& upgrades);
    
};

