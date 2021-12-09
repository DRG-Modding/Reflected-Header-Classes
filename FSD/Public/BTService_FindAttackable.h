#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "BTService_FindAttackable.generated.h"

UCLASS()
class UBTService_FindAttackable : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    bool MustBeAlive;
    
    UPROPERTY(EditAnywhere)
    bool SwithToBetterTargets;
    
    UPROPERTY(EditAnywhere)
    bool RegisterForPositioning;
    
    UPROPERTY(EditAnywhere)
    bool IsFlying;
    
    UPROPERTY(EditAnywhere)
    bool CanShoot;
    
    UPROPERTY(EditAnywhere)
    float TargetingRange;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TargetQuery;
    
public:
    UBTService_FindAttackable();
};

