#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "EnemyAnimInstance.generated.h"

class UHealthComponentBase;
class USkeletalMeshComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAnimInstanceOnIsAttackingChanged, bool, IsAttacking);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyAnimInstanceOnRangedAttackNotify);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyAnimInstanceOnStopLeadingNotify);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAnimInstanceOnMeleeAttackNotify, FName, nameValue);

UCLASS(NonTransient)
class UEnemyAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
    FEnemyAnimInstanceOnRangedAttackNotify OnRangedAttackNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
    FEnemyAnimInstanceOnMeleeAttackNotify OnMeleeAttackNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
    FEnemyAnimInstanceOnStopLeadingNotify OnStopLeadingNotify;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyAnimInstanceOnIsAttackingChanged OnIsAttackingChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsAttacking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsAlive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RandomStartPosition;
    
    UPROPERTY(Export, Transient)
    UHealthComponentBase* HealthComponent;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSlotPlayingAnyAnimation(FName SlotNodeName) const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMesh() const;
    
    UEnemyAnimInstance();
};

