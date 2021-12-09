#pragma once
#include "CoreMinimal.h"
#include "WeaponFireComponent.h"
#include "EImpactDecalSize.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "ERicochetBehavior.h"
#include "HitscanBaseComponent.generated.h"

class UDamageComponent;
class UDamageClass;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHitscanBaseComponentOnSpreadChanged, float, HorizontalSpread, float, VerticalSpread, bool, isAtRest);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHitscanBaseComponentOnFireComplete);

UCLASS()
class UHitscanBaseComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHitscanBaseComponentOnSpreadChanged OnSpreadChanged;
    
    UPROPERTY()
    FHitscanBaseComponentOnFireComplete OnFireComplete;
    
    UPROPERTY(EditAnywhere)
    float SpreadPerShot;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Damage;
    
    UPROPERTY(VisibleAnywhere)
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float WeakpointDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxPenetrations;
    
    UPROPERTY(EditAnywhere)
    EImpactDecalSize ImpactDecalSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseDynamicSpread;
    
    UPROPERTY(VisibleAnywhere)
    float MinSpread;
    
    UPROPERTY(EditAnywhere)
    float MinSpreadWhenMoving;
    
    UPROPERTY(EditAnywhere)
    float MinSpreadWhenSprinting;
    
    UPROPERTY(EditAnywhere)
    float MaxSpread;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SpreadCurve;
    
    UPROPERTY(EditAnywhere)
    float SpreadRecoveryPerSecond;
    
    UPROPERTY(EditAnywhere)
    float VerticalSpreadMultiplier;
    
    UPROPERTY(EditAnywhere)
    float HorizontalSpredMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalSpread;
    
    UPROPERTY(EditAnywhere)
    float MaxHorizontalSpread;
    
    UPROPERTY(EditAnywhere)
    ERicochetBehavior RicochetBehavior;
    
    UPROPERTY(EditAnywhere)
    float RicochetChance;
    
    UPROPERTY(EditAnywhere)
    bool RicochetOnWeakspotOnly;
    
    UPROPERTY(EditAnywhere)
    float RicochetMaxRange;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StopFire();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RemoveDebris(int32 instance, int32 Component);
    
public:
    UFUNCTION(BlueprintPure)
    float GetCurrentVerticalSpread() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHorizontalSpread() const;
    
    UHitscanBaseComponent();
};

