#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine HitResult
#include "StatusEffectTriggerComponent.generated.h"

class AActor;
class UStatusEffect;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatusEffectTriggerComponentOnEffectTriggered, AActor*, TargetActor, bool, entered);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStatusEffectTriggerComponentOnActorEnterLeave, AActor*, TargetActor, bool, entered);

UCLASS(BlueprintType)
class UStatusEffectTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FStatusEffectTriggerComponentOnEffectTriggered OnEffectTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FStatusEffectTriggerComponentOnActorEnterLeave OnActorEnterLeave;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> LeaveTriggerEffects;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UPrimitiveComponent* collider;
    
    UPROPERTY(EditAnywhere)
    bool RemoveStatusEffectOnEndOverlap;
    
    UFUNCTION()
    void OnOverlapEnd(AActor* MyActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* MyActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UStatusEffectTriggerComponent();
};

