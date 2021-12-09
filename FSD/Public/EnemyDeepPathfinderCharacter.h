#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "NetMontageAble.h"
#include "QueuedMontage.h"
#include "EnemyDeepPathfinderCharacter.generated.h"

class UEnemyHealthComponent;

UCLASS()
class AEnemyDeepPathfinderCharacter : public ADeepPathfinderCharacter, public INetMontageAble {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyHealthComponent* HealthComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_QueuedMontage)
    FQueuedMontage QueuedMontage;
    
    UFUNCTION()
    void OnRep_QueuedMontage();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEnemyDeepPathfinderCharacter();
};

