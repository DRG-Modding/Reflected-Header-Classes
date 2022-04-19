#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PerkClaimedDelegateDelegate.h"
#include "PerkEquipDelegateDelegate.h"
#include "PerkHighlightedDelegateDelegate.h"
#include "PerkIntDelegateDelegate.h"
#include "PerkDelegateItem.generated.h"

UCLASS()
class FSD_API UPerkDelegateItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPerkClaimedDelegate OnPerkClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPerkEquipDelegate OnPerkEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPerkEquipDelegate OnPerkUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPerkHighlightedDelegate OnPerkHighlighted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPerkIntDelegate OnChargesUsedChanged;
    
    UPerkDelegateItem();
};

