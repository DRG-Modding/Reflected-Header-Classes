#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "ElectroBeam.generated.h"

class UAudioComponent;
class USceneComponent;
class UCapsuleComponent;
class UStatusEffect;
class UParticleSystemComponent;
class UHealthComponentBase;

UCLASS(Abstract)
class AElectroBeam : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UCapsuleComponent* collider;
    
    UPROPERTY(Transient)
    TArray<AActor*> ParentPlants;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SourceLocation)
    FVector_NetQuantize SourceLocation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TargetLocation)
    FVector_NetQuantize TargetLocation;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    USceneComponent* DelaySource;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    USceneComponent* DelayTarget;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* BeamEffect;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* ZappSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsToApply;
    
    UPROPERTY(EditAnywhere)
    float MaxLitTime;
    
    UPROPERTY(EditAnywhere)
    float MinLitTime;
    
    UPROPERTY(EditAnywhere)
    float MaxUnlitTime;
    
    UPROPERTY(EditAnywhere)
    float MinUnlitTime;
    
    UPROPERTY(EditAnywhere)
    bool ShouldFlicker;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_Flag)
    bool IsLit;
    
public:
    UFUNCTION()
    void SetTarget(USceneComponent* TargetPoint);
    
    UFUNCTION()
    void SetSource(USceneComponent* SourcePoint);
    
    UFUNCTION(BlueprintCallable)
    void SetParents(AActor* firstParent, AActor* secondParent);
    
    UFUNCTION(BlueprintCallable)
    void RecalculateBeam();
    
    UFUNCTION()
    void OnRep_TargetLocation();
    
    UFUNCTION()
    void OnRep_SourceLocation();
    
private:
    UFUNCTION()
    void OnRep_Flag();
    
public:
    UFUNCTION()
    void OnParentTwoDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION()
    void OnParentOneDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* GetParticleEffect();
    
    UFUNCTION(BlueprintCallable)
    UCapsuleComponent* GetCollider();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* GetAudio();
    
    UFUNCTION(BlueprintCallable)
    void DelayedSetTarget(USceneComponent* TargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void DelayedSetSource(USceneComponent* SourcePoint);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCollisionAndEffect();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AElectroBeam();
};

