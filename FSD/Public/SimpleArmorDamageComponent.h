#pragma once
#include "CoreMinimal.h"
#include "DestructableBodypartItem.h"
#include "BaseArmorDamageComponent.h"
#include "SimpleArmorDamageComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleArmorDamageComponentOnRadialArmorPartsDestroyedEvent, const TArray<uint8>&, destroyedParts);

UCLASS()
class USimpleArmorDamageComponent : public UBaseArmorDamageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleArmorDamageComponentOnRadialArmorPartsDestroyedEvent OnRadialArmorPartsDestroyedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float ArmorStrength;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FDestructableBodypartItem> PhysBoneToArmor;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ArmorDamageIndexMask)
    uint32 ArmorDamageIndexMask;
    
    UFUNCTION(Reliable, Server)
    void Server_SetArmorIndexDestroyed(int32 Index, bool Disolved);
    
    UFUNCTION()
    void OnRep_ArmorDamageIndexMask(uint32 OldIndexMask);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USimpleArmorDamageComponent();
};

