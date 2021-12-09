#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "EDroneAIState.h"
#include "BoscoAnimInstance.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBoscoAnimInstanceOnWeaponsReady);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBoscoAnimInstanceOnWeaponsNotReady);

UCLASS(NonTransient)
class UBoscoAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoscoAnimInstanceOnWeaponsReady OnWeaponsReady;
    
    UPROPERTY()
    FBoscoAnimInstanceOnWeaponsNotReady OnWeaponsNotReady;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float DigAnimPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EDroneAIState CurrentState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsReadyToMine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsMining;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsFiring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsReviving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsCarryingGem;
    
public:
    UBoscoAnimInstance();
};

