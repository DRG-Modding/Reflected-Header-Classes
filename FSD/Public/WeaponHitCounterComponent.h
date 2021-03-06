#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WeaponHitCounterComponent.generated.h"

class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UWeaponHitCountEffect;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponHitCounterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponHitCountEffect* HitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiresWeakpointHit;
    
public:
    UWeaponHitCounterComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnReloading();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnStoppedUsing();
    
    UFUNCTION(BlueprintCallable)
    void OnReloading();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowDamageEffects(const TArray<TWeakObjectPtr<AActor>>& Targets);
    
};

