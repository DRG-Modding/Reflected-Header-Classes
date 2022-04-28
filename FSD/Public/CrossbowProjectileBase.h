#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Projectile.h"
#include "OnCrossbowDamageDealtDelegate.h"
#include "ECrossbowEffectApplication.h"
#include "EInputKeys.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CrossbowProjectileBase.generated.h"

class UCrossbowStuckProjectileEffectBanshee;
class ACrossbowProjectileStuck;
class UCrossbowProjectileRecallable;
class UTexture2D;
class UCrossbowProjectileMagnetic;
class UCrossbowProjectileRicochet;
class UStatusEffect;
class USoundCue;
class UStaticMesh;
class APlayerCharacter;
class USceneComponent;

UCLASS(Blueprintable)
class ACrossbowProjectileBase : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StatusEffectTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileRecallable* RecallComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileMagnetic* MagneticComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    UCrossbowProjectileRicochet* RicochetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    UCrossbowStuckProjectileEffectBanshee* BansheeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrossbowStuckProjectileEffectBanshee> BansheeComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrossbowProjectileRecallable> RecallComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TriforkIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrossbowDamageDealt OnDamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrossbowProjectileStuck> SpawnableStuckProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossbowEffectApplication EffectApplication;
    
    UPROPERTY(EditAnywhere)
    uint8 SelectionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEverBePickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Penetrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsASpecialProjectile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ProjectileMesh;
    
    UPROPERTY(EditAnywhere)
    float KillTrailAfterTime;
    
public:
    ACrossbowProjectileBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* Player, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrowInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpecialArrowEquipped() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaledStatusEffectTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyDamageEffects(const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_SetBansheePulseVisible(bool Enabled);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_OnCavePointRemoved(USceneComponent* Point);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_HideEverythingButTrail(bool NewVisibility);
    
};

