#pragma once
#include "CoreMinimal.h"
#include "RunningMissionBP.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "EliteEnemyEntry.h"
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
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
    
public:
    UHeroEnemies();
};

