#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ECharacterState.h"
#include "CarriedItemState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "EItemCategory.h"
#include "InventoryComponent.generated.h"

class AItem;
class APickaxeItem;
class UInventoryComponent;
class AActor;
class ALaserPointerItem;
class ARecallableSentryGunItem;
class AThrownGrenadeItem;
class UInventoryList;
class USoundCue;
class ATerrainScannerItem;
class ARessuplyPodItem;
class UItemUpgrade;
class UDialogDataAsset;
class AFlare;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryComponentOnMaxFlareCountChanged, int32, CurrentCount, UInventoryComponent*, Inventory);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInventoryComponentOnItemsLoaded);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnItemClicked, AItem*, Item);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnItemEquipped, AItem*, Item);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnGrenadeCountChanged, int32, CurrentCount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryComponentOnFlareProduction, int32, NextIndex, float, Progress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnItemUnequipped, AItem*, Item);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryComponentOnFlareCountChanged, int32, CurrentCount, UInventoryComponent*, Inventory);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnResuppliedEvent, float, percentage);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnCarriableChangedEvent, AActor*, carriedActor);

UCLASS(BlueprintType)
class UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnItemsLoaded OnItemsLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnItemClicked OnItemClicked;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnItemEquipped OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnItemUnequipped OnItemUnequipped;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnGrenadeCountChanged OnGrenadeCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnFlareCountChanged OnFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnMaxFlareCountChanged OnMaxFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnFlareProduction OnFlareProduction;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnResuppliedEvent OnResuppliedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnCarriableChangedEvent OnCarriableChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bItemsLoaded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInventoryList* InventoryList;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AThrownGrenadeItem> ThrownGrenadeClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Items)
    TArray<AItem*> Items;
    
    UPROPERTY(Replicated, Transient)
    TArray<AItem*> UnlistedItems;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    APickaxeItem* MiningItem;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AThrownGrenadeItem* GrenadeItem;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    ALaserPointerItem* LaserPointerItem;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    ATerrainScannerItem* TerrainScannerItem;
    
    UPROPERTY(Transient)
    ARecallableSentryGunItem* RecallableSentryGunItem;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PickedUpItem)
    AItem* PickedUpItem;
    
    UPROPERTY(Replicated, Transient)
    ARessuplyPodItem* ResupplyItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AItem* PreviousItem;
    
    UPROPERTY(Transient)
    TArray<AItem*> EquipHistory;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_CarriedItem)
    FCarriedItemState CarriedItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector FlareOffset;
    
    UPROPERTY(EditAnywhere)
    USoundCue* OutOfFlaresSound;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OutOfFlaresShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlareAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlareCooldown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FlareProductionTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FLinearColor FlareChromaColor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FlareProductionTimeLeft;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 MaxFlares;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Flares;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FlareCooldownRemaining;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<AFlare> flareClass;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<UItemUpgrade*> FlareUpgrades;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_EquippedItem)
    AItem* EquippedItem;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateFromSaveGameInSlot(EItemCategory Category);
    
    UFUNCTION()
    void StartGrenadeThrow();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ThrowFlare();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Equip(AItem* Item);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DropCarriedItem();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Resupply(float percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PickupItemInstance(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    AItem* PickupItem(TSubclassOf<AItem> itemClass);
    
protected:
    UFUNCTION()
    void OnRep_PickedUpItem();
    
    UFUNCTION()
    void OnRep_Items();
    
    UFUNCTION()
    void OnRep_EquippedItem(AItem* oldItem);
    
    UFUNCTION()
    void OnRep_CarriedItem(FCarriedItemState& LastCarriedItem);
    
    UFUNCTION()
    void OnCharacterStateChanged(ECharacterState NewState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTerrainScannerEquipped() const;
    
    UFUNCTION(BlueprintPure)
    bool HasPickedUpItem() const;
    
    UFUNCTION(BlueprintPure)
    bool HasDrink() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalAmmoLeft() const;
    
    UFUNCTION(BlueprintPure)
    ARecallableSentryGunItem* GetRecallableSentryGunItem() const;
    
    UFUNCTION(BlueprintPure)
    AItem* GetItem(EItemCategory Category) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetCarriedItem() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AItem*> GetAllItems() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipLastItem(bool ignoreUsing);
    
    UFUNCTION(BlueprintCallable)
    bool EquipCategory(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void EquipAtIndex(int32 Index, bool ignoreUsing);
    
    UFUNCTION(BlueprintCallable)
    void Equip(AItem* Item, bool ignoreIsUsing);
    
    UFUNCTION()
    void EndGrenadeThrow();
    
    UFUNCTION(BlueprintCallable)
    void DropPickedupItem();
    
protected:
    UFUNCTION()
    void CreateStartingEquipmentWhenItemsLoaded();
    
    UFUNCTION(Client, Reliable)
    void Client_Resupply(float percentage);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_DropPickedUpItem();
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify2();
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify1();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UInventoryComponent();
};

