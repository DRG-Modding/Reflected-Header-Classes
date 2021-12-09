#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "EscortMuleTrack.generated.h"

UCLASS(Abstract)
class AEscortMuleTrack : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
public:
    AEscortMuleTrack();
};

