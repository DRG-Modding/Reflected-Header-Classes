#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "BoscoAbillityComponent.generated.h"

class ABosco;
class AActor;
class UItemUpgrade;
class UAnimSequenceBase;
class AProjectileBase;
class USoundBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBoscoAbillityComponentOnAbillityChargeProgress, float, aProgress, int32, aNextIndex);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoscoAbillityComponentOnAbillityChargeUsed, int32, aCurrentCharges);

UCLASS(BlueprintType)
class UBoscoAbillityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBoscoAbillityComponentOnAbillityChargeProgress OnAbillityChargeProgress;
    
    UPROPERTY(BlueprintAssignable)
    FBoscoAbillityComponentOnAbillityChargeUsed OnAbillityChargeUsed;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<AProjectileBase> projectileClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USoundBase* VoiceOnUse;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ABosco> AbillityOwner;
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetMaxCharges() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCharges() const;
    
    UBoscoAbillityComponent();
};

