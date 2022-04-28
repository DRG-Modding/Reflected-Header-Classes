#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DamageBonusBase.generated.h"

class UDamageBonusBase;
class UDamageCondition;
class UDamageComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDamageBonusBase : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageCondition* Condition;
    
public:
    UDamageBonusBase();
    UFUNCTION(BlueprintCallable)
    static UDamageBonusBase* AddDamageBonusToComponent(TSubclassOf<UDamageBonusBase> damageBonusClass, UDamageComponent* DamageComponent);
    
};

