#pragma once
#include "CoreMinimal.h"
#include "GearStatEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

