#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "GearStatEntry.h"
#include "UpgradableGear.generated.h"

class AFSDPlayerState;

UINTERFACE(Blueprintable)
class UUpgradableGear : public UInterface {
    GENERATED_BODY()
};

class IUpgradableGear : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGearStatEntry(AFSDPlayerState* PlayerState, UPARAM(Ref) TArray<FGearStatEntry>& Stats) const;
    
};

