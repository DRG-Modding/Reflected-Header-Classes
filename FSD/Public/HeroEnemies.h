#pragma once
#include "CoreMinimal.h"
#include "RunningMissionBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "EliteEnemyEntry.h"
#include "HeroEnemies.generated.h"

class UEnemyDescriptor;
class APawn;

UCLASS(Abstract, Blueprintable)
class UHeroEnemies : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AllowedQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> Entries;
    
public:
    UHeroEnemies();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
    
};

