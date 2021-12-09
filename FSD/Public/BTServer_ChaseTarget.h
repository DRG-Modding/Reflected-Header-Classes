#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "BTServer_ChaseTarget.generated.h"

UCLASS()
class UBTServer_ChaseTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    bool MustBeAlive;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SwitchTargetCooldownTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TargetingQuery;
    
    UPROPERTY(EditAnywhere)
    bool IsFlying;
    
    UPROPERTY(EditAnywhere)
    bool CanShoot;
    
    UPROPERTY(EditAnywhere)
    float TargetingRange;
    
    UPROPERTY(EditAnywhere)
    float SwitchTargetTime;
    
    UPROPERTY(EditAnywhere)
    float SwitchTargetDeviation;
    
public:
    UBTServer_ChaseTarget();
};

