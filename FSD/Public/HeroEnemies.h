#pragma once
#include "CoreMinimal.h"
#include "EliteEnemyEntry.h"
#include "RunningMissionBP.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "HeroEnemies.generated.h"

class UEnemyDescriptor;
class APawn;

UCLASS(Abstract)
class UHeroEnemies : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery AllowedQuery;
    
    UPROPERTY(EditAnywhere)
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> Entries;
    
    UFUNCTION()
    void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
    
public:
    UHeroEnemies();
};

