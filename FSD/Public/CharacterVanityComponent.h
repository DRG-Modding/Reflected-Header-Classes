#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "TattooArmorItem.h"
#include "EHeadVanityType.h"
#include "EVanitySlot.h"
#include "CharacterVanityComponent.generated.h"

class UCharacterVanityItems;
class UBeardColorVanityItem;
class UMaterialInterface;
class UVanityItem;
class UMaterialInstanceDynamic;
class USkeletalMeshComponent;
class UObject;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class UCharacterVanityComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCharacterVanityItems* AvailableVanityItems;
    
    UPROPERTY(Transient)
    UBeardColorVanityItem* ShownBeardColor;
    
    UPROPERTY(Transient)
    UMaterialInterface* ArmorMaterial;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DynamicSkinMaterial;
    
    UPROPERTY(Transient)
    EHeadVanityType HeadVanityType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EquippedVanity)
    TArray<UVanityItem*> EquippedVanity;
    
    UPROPERTY(Transient)
    UMaterialInterface* SkinMaterial;
    
    UPROPERTY(Transient)
    TArray<FTattooArmorItem> Tattoos;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(Export, Transient)
    TMap<EVanitySlot, USkeletalMeshComponent*> VanityMeshes;
    
    UFUNCTION()
    void UpdateMeshes();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateEquippedVanity(bool applyItems);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedVanityInViewer(const TArray<UVanityItem*>& Vanity);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetEquippedVanity(const TArray<UVanityItem*>& equippedItems);
    
public:
    UFUNCTION(BlueprintPure)
    static UVanityItem* Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot);
    
protected:
    UFUNCTION()
    void OnRep_EquippedVanity();
    
public:
    UFUNCTION(BlueprintPure)
    UVanityItem* GetEquippedVanityItem(EVanitySlot Slot) const;
    
    UFUNCTION(BlueprintPure)
    UCharacterVanityItems* GetAvailableVanityItems() const;
    
    UFUNCTION(BlueprintCallable)
    void EnforceValidPaintjob();
    
    UFUNCTION(BlueprintCallable)
    void CreateEquippedGear();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterVanityComponent();
};

