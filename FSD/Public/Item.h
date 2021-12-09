#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "SaveGameIDInterface.h"
#include "Skinnable.h"
#include "LoadoutItem.h"
#include "ItemIDInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine EAttachLocation
#include "PlaySoundInterface.h"
#include "AudioWithCooldown.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "ItemLoadoutAnimations.h"
#include "Item.generated.h"

class UItemCharacterAnimationSet;
class UTexture2D;
class UStaticMeshComponent;
class UItemID;
class UDialogDataAsset;
class UCurveFloat;
class APlayerCharacter;
class UUpgradableItemComponent;
class UCameraShake;
class ACharacter;
class USoundBase;
class UAudioComponent;
class UItemsBarIcon;
class USceneComponent;
class USoundAttenuation;
class USoundConcurrency;
class UFirstPersonStaticMeshComponent;
class USkinEffect;
class AItem;

UCLASS(Abstract)
class FSD_API AItem : public AActor, public ISaveGameIDInterface, public ISkinnable, public IItemIDInterface, public ILoadoutItem, public IPlaySoundInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector FPCameraOffset;
    
    UPROPERTY(EditAnywhere)
    FAudioWithCooldown AudioFriendlyFire;
    
protected:
    UPROPERTY(EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UUpgradableItemComponent* UpgradableItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CameraShakeOnStartUsing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CameraShakeOnEquip;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* HeatCurve;
    
    UPROPERTY(EditAnywhere)
    float ManualHeatPerUse;
    
    UPROPERTY(EditAnywhere)
    float CooldownRate;
    
    UPROPERTY(EditAnywhere)
    float ManualCooldownDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnjamDuration;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentTemperature;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioTemperature;
    
    UPROPERTY(EditAnywhere)
    float AudioTemperatureFadeout;
    
    UPROPERTY(EditAnywhere)
    FName TemperatureFloatParam;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* TemperatureAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool Overheated;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ShoutOverheated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAimAssistEnabled;
    
    UPROPERTY(EditAnywhere)
    float MovementRateWhileUsing;
    
    UPROPERTY(EditAnywhere)
    bool CanPlayLedgeClimbWhileUsing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanInspectItem;
    
    UPROPERTY(EditAnywhere)
    bool CanSprintWithItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UItemsBarIcon> CustomIconWidget;
    
    UPROPERTY(EditAnywhere)
    float AdvancedVibrationSendLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsUsing)
    bool IsUsing;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateSkin();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StartUsing(bool NewIsUsing);
    
public:
    UFUNCTION(BlueprintCallable)
    void Resupply(float percentage);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RemovedFromInventory(ACharacter* oldCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveUnequipped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveStopUsing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveStartUsing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveEquipped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveCycledItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Recieve_UpdateMeshses(bool NewIsFirstPerson);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveResupply(float percentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_Overheated();
    
    UFUNCTION(BlueprintImplementableEvent)
    UStaticMeshComponent* Receive_GetTPAnimationEventMesh() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTemperatureChanged(float Temperature, bool NewOverheated);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkinChanged(USkinEffect* Skin);
    
protected:
    UFUNCTION()
    void OnRep_IsUsing(bool OldValue);
    
    UFUNCTION()
    void OnOwnerDestroyed(AActor* owningActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintPure)
    FItemLoadoutAnimations GetLoadoutAnimations() const;
    
    UFUNCTION(BlueprintPure)
    FText GetItemName() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetItemIconLine() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetItemIconBG() const;
    
    UFUNCTION(BlueprintPure)
    static AItem* GetItemDefaultObject(TSubclassOf<AItem> itemClass);
    
    UFUNCTION(BlueprintPure)
    FText GetItemCategory() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    USceneComponent* GetHeatingAudioSceneComponent();
    
public:
    UFUNCTION(BlueprintPure)
    UItemCharacterAnimationSet* GetCharacterAnimationSet() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAnalyticsItemName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAnalyticsItemCategory() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void AddedToInventory(APlayerCharacter* ItemOwner);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AItem();
};

