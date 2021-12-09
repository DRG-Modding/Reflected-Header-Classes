#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EInputKeys.h"
#include "DetPack.generated.h"

class UProjectileMovementComponent;
class APlayerCharacter;
class UExplosionComponent;
class USingleUsableComponent;
class USimpleHealthComponent;
class ADetPackItem;
class UHealthComponentBase;

UCLASS()
class ADetPack : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpgradedStaggerChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpgradedStaggerDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpgradedFearFactor;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float VisualDamageRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float IncreasedFearRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float IncreasedStaggerRadius;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UExplosionComponent* Explosion;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* UseComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* SimpleHealth;
    
    UPROPERTY(Transient, VisibleAnywhere)
    ADetPackItem* Detonator;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HasExploded)
    bool HasExploded;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsMoving)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ExplodesOnDeath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasExtraStaggerRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasExtraFearRadius;
    
    UFUNCTION(BlueprintCallable)
    void UseFearStaggerUpgrades();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveHitObject();
    
    UFUNCTION()
    void OnRep_IsMoving();
    
    UFUNCTION()
    void OnRep_HasExploded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExploded();
    
    UFUNCTION()
    void OnDetPackPickedUp(APlayerCharacter* User, EInputKeys Key);
    
public:
    UFUNCTION()
    void OnDetPackDeath(UHealthComponentBase* HealthComponent);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADetPack();
};

