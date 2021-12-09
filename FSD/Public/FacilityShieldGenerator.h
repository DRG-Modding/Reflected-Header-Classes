#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "FacilityShieldGenerator.generated.h"

UCLASS()
class AFacilityShieldGenerator : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
public:
    AFacilityShieldGenerator();
};

