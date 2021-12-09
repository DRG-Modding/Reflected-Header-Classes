#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "WeaponHitCounterComponent.generated.h"

class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UWeaponHitCountEffect;
class UPrimitiveComponent;
class AActor;

UCLASS()
class UWeaponHitCounterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UWeaponHitCountEffect* HitEffect;
    
    UPROPERTY(EditAnywhere)
    bool RequiresWeakpointHit;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnReloading();
    
    UFUNCTION()
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION()
    void OnStoppedUsing();
    
    UFUNCTION()
    void OnReloading();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowDamageEffects(const TArray<TWeakObjectPtr<AActor>>& Targets);
    
public:
    UWeaponHitCounterComponent();
};

