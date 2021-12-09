#pragma once
#include "CoreMinimal.h"
#include "Targetable.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "TargetDummyPawn.generated.h"

UCLASS(Abstract)
class ATargetDummyPawn : public AActor, public IGameplayTagAssetInterface, public ITargetable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
public:
    ATargetDummyPawn();
};

