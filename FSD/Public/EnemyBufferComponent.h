#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EnemyBufferComponent.generated.h"

class UHealthComponentBase;
class UStatusEffect;
class UParticleSystem;
class AFSDPawn;
class UParticleSystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyBufferComponentOnBuffingChangedEvent, bool, isBuffing);

UCLASS(BlueprintType)
class UEnemyBufferComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(EditAnywhere)
    FName BufferParticleSocket;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* Particles;
    
    UPROPERTY(EditAnywhere)
    float ParticleTangentSize;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyBufferComponentOnBuffingChangedEvent OnBuffingChangedEvent;
    
    UPROPERTY(EditAnywhere)
    float BuffRadius;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBuffedTargets;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery BuffQuery;
    
    UPROPERTY(Replicated, Transient)
    TArray<AFSDPawn*> BuffTargets;
    
    UPROPERTY(Export, Transient)
    TArray<UParticleSystemComponent*> ParticleInstances;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBuffingEnabled(bool Enabled);
    
protected:
    UFUNCTION()
    void OnPawnDied(UHealthComponentBase* Health);
    
    UFUNCTION()
    void OnOwnerDied(UHealthComponentBase* Health);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEnemyBufferComponent();
};
