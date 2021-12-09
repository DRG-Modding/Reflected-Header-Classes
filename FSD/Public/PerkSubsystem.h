#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine WorldSubsystem
#include "PerkSubsystem.generated.h"

class UPerkAsset;
class UPerkDelegateItem;

UCLASS(BlueprintType)
class UPerkSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UPerkAsset*, UPerkDelegateItem*> PerkDelegates;
    
public:
    UFUNCTION(BlueprintPure)
    UPerkDelegateItem* GetPerkDelegates(UPerkAsset* Perk);
    
    UPerkSubsystem();
};

