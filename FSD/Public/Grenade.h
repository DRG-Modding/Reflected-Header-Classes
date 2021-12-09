#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "SaveGameIDInterface.h"
#include "LoadoutItem.h"
#include "ItemIDInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine HitResult
#include "Grenade.generated.h"

class UProjectileMovementComponent;
class UItemID;
class ALoadoutItemProxy;
class UStaticMesh;
class USoundCue;
class UParticleSystem;
class UGrenadeAnimationSet;
class AGrenade;

UCLASS()
class AGrenade : public AActor, public ISaveGameIDInterface, public IItemIDInterface, public ILoadoutItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ExplodeOnImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxGrenades;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_HasExploded)
    bool HasExploded;
    
    UPROPERTY(EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> WeaponPreviewClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALoadoutItemProxy> LoadoutProxy;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* HandAttachMesh;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactGroundSound;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ImpactGroundParticles;
    
    UPROPERTY(EditAnywhere)
    UGrenadeAnimationSet* GrenadeAnimationSetOverride;
    
    UFUNCTION()
    void OnRep_HasExploded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExploded();
    
    UFUNCTION(BlueprintPure)
    bool IsNonFriendlyPawn(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsNonFriendly(AActor* Actor) const;
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintPure)
    static AGrenade* GetGrenadeDefaultObject(TSubclassOf<AGrenade> GrenadeClass);
    
protected:
    UFUNCTION()
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGrenade();
};
