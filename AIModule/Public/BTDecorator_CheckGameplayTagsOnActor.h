#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
//CROSS-MODULE INCLUDE: GameplayTags EGameplayContainerMatchType
#include "BTDecorator_CheckGameplayTagsOnActor.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ActorToCheck;
    
    UPROPERTY(EditAnywhere)
    EGameplayContainerMatchType TagsToMatch;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY()
    FString CachedDescription;
    
public:
    UBTDecorator_CheckGameplayTagsOnActor();
};

