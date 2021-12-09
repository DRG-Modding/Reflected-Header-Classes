#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
#include "ElectricalSMG.generated.h"

class UStatusEffect;
class UParticleSystem;
class USoundCue;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS()
class AElectricalSMG : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> AoEStatusEffect;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* AoEParticle;
    
    UPROPERTY(EditAnywhere)
    USoundCue* AoESound;
    
    UPROPERTY(EditAnywhere)
    float AoEStatusEffectChance;
    
    UPROPERTY(EditAnywhere)
    float AoEStatusEffectRange;
    
    UFUNCTION()
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION()
    void OnStatusEffectPushed(UHealthComponentBase* Health);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_OnAoETriggered(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal) const;
    
public:
    AElectricalSMG();
};

