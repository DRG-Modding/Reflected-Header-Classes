#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RunningMissionBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "StatusEffectMissionBP.generated.h"

class UEnemyDescriptor;
class UStatusEffect;
class APawn;

UCLASS(Blueprintable)
class UStatusEffectMissionBP : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery EnemyQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
public:
    UStatusEffectMissionBP();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Pawn, UEnemyDescriptor* descriptor);
    
};

