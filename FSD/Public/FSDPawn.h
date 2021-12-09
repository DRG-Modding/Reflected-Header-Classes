#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Pawn
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
#include "Targetable.h"
#include "ProjectileSpawner.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EPawnAttitude.h"
#include "FSDPawn.generated.h"

class UStatusEffectsComponent;
class UEnemyTemperatureComponent;
class AFSDAIController;
class UEnemyDescriptor;
class UPawnStatsComponent;
class AActor;
class USkeletalMeshComponent;
class UHealthComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPawnOnFrozenEvent, bool, boolValue);

UCLASS(Abstract)
class AFSDPawn : public APawn, public IGameplayTagAssetInterface, public ITargetable, public IProjectileSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDPawnOnFrozenEvent OnFrozenEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStatusEffectsComponent* StatusEffects;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyTemperatureComponent* Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadOnly)
    UEnemyDescriptor* SpawnedFromDescriptor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsFrozen)
    bool IsFrozen;
    
    UPROPERTY(EditAnywhere)
    bool CanFlee;
    
    UPROPERTY(EditAnywhere)
    bool FleeInsteadOfBackingOff;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsFleeing;
    
    UPROPERTY(Export, Transient)
    UPawnStatsComponent* PawnStatsInstance;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnFreeze();
    
    UFUNCTION(BlueprintCallable)
    void StopFleeing();
    
    UFUNCTION(BlueprintCallable)
    void StartFleeing(const FVector& fromLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAlerted(bool isAlerted);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void Receive_Alerted();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnUnFrozen();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStoppedFleeing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartedFleeing();
    
    UFUNCTION()
    void OnRep_IsFrozen();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFrozen(AActor* Source);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnFirstHostileDamageTaken();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnemyScaled(float newScale);
    
    UFUNCTION()
    void OnArmorShattered(const FVector& Location);
    
    UFUNCTION()
    void OnAlerted();
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeRagdollMesh(USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MakeElite();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool GetIsAlerted() const;
    
    UFUNCTION(BlueprintPure)
    UHealthComponentBase* GetHealthComponent() const;
    
    UFUNCTION(BlueprintPure)
    AFSDAIController* GetFSDAIController() const;
    
    UFUNCTION(BlueprintPure)
    EPawnAttitude GetAttitude() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze(AActor* Source);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExplodePawn();
    
    UFUNCTION(BlueprintCallable)
    void BackOffFromLocation(const FVector& fromLocation);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFSDPawn();
};

