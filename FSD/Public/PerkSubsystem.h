#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "PerkSubsystem.generated.h"

class UPerkDelegateItem;
class UPerkAsset;

UCLASS(BlueprintType)
class FSD_API UPerkSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPerkAsset*, UPerkDelegateItem*> PerkDelegates;
    
public:
    UPerkSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkDelegateItem* GetPerkDelegates(UPerkAsset* Perk);
    
};

