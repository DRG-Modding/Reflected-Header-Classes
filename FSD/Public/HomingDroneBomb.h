#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "HomingDroneBomb.generated.h"

class UEnemyHealthComponent;
class USoundCue;

UCLASS()
class AHomingDroneBomb : public AProjectile, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ArmingSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HomingUpdateInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetSearchInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HomingAccelerationMagnitude)
    float HomingAccelerationMagnitude;
    
public:
    UFUNCTION()
    void UpdateHomingSpeed();
    
    UFUNCTION()
    void SearchForTarget();
    
protected:
    UFUNCTION()
    void OnRep_HomingAccelerationMagnitude();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AHomingDroneBomb();
};

