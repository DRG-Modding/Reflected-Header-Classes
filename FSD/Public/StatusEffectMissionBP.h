#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RunningMissionBP.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "StatusEffectMissionBP.generated.h"

class UStatusEffect;
class UEnemyDescriptor;
class APawn;

UCLASS()
class UStatusEffectMissionBP : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery EnemyQuery;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UFUNCTION()
    void OnEnemySpawned(APawn* Pawn, UEnemyDescriptor* descriptor);
    
public:
    UStatusEffectMissionBP();
};

