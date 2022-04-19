#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "HomingDroneBomb.generated.h"

class UEnemyHealthComponent;
class USoundCue;

UCLASS()
class AHomingDroneBomb : public AProjectile, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ArmingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSearchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_HomingAccelerationMagnitude, meta=(AllowPrivateAccess=true))
    float HomingAccelerationMagnitude;
    
public:
    AHomingDroneBomb();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateHomingSpeed();
    
    UFUNCTION(BlueprintCallable)
    void SearchForTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HomingAccelerationMagnitude();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

