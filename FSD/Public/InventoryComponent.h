#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FlareProductionDelegateDelegate.h"
#include "InventoryBase.h"
#include "CarriableChangedDelegateDelegate.h"
#include "ResupplyDelegateDelegate.h"
#include "InventoryItemsLoadedDelegate.h"
#include "ItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "GrenadesDelegateDelegate.h"
#include "FlaresDelegateDelegate.h"
#include "EItemCategory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InventoryComponent.generated.h"

class APickaxeItem;
class ARessuplyPodItem;
class UInventoryList;
class AThrownGrenadeItem;
class AFlare;
class USoundCue;
class UDialogDataAsset;
class UItemUpgrade;
class ALaserPointerItem;
class ATerrainScannerItem;
class ARecallableSentryGunItem;
class AActor;
class AItem;

UCLASS(meta=(BlueprintSpawnableComponent))
class UInventoryComponent : public UInventoryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInventoryItemsLoaded OnItemsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGrenadesDelegate OnGrenadeCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlaresDelegate OnFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlaresDelegate OnMaxFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlareProductionDelegate OnFlareProduction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResupplyDelegate OnResuppliedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCarriableChangedDelegate OnCarriableChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryList* InventoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThrownGrenadeItem> ThrownGrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_FlareClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFlare> flareClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FlareOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OutOfFlaresSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OutOfFlaresShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareCooldown;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float FlareProductionTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor FlareChromaColor;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float FlareProductionTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxFlares;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Flares;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float FlareCooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> FlareUpgrades;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bItemsLoaded;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APickaxeItem* MiningItem;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AThrownGrenadeItem* GrenadeItem;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ALaserPointerItem* LaserPointerItem;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ATerrainScannerItem* TerrainScannerItem;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ARessuplyPodItem* ResupplyItem;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ARecallableSentryGunItem* RecallableSentryGunItem;
    
public:
    UInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateFromSaveGameInSlot(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void StartGrenadeThrow();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThrowItem(AActor* Item, FVector force, bool PlayMontage);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThrowFlare();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Resupply(float percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PickupItemInstance(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    AItem* PickupItem(TSubclassOf<AItem> itemClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FlareClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTerrainScannerEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPickedUpItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDrink() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalAmmoLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecallableSentryGunItem* GetRecallableSentryGunItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetItem(EItemCategory Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCarriedItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool EquipCategory(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void Equip(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void EndGrenadeThrow();
    
    UFUNCTION(BlueprintCallable)
    void DropPickedupItem();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Resupply(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify2();
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify1();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_PlayThrowMontage(AActor* Item);
    
};

