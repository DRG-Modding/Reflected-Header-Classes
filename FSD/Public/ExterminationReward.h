#pragma once
#include "CoreMinimal.h"
#include "RunningMissionBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ExterminationReward.generated.h"

class UResourceData;
class AActor;

UCLASS(Abstract, Blueprintable)
class UExterminationReward : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float AwardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedFilter;
    
public:
    UExterminationReward();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy);
    
};

