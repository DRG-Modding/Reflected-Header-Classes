#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
//CROSS-MODULE INCLUDE: GameplayTags EGameplayContainerMatchType
#include "EnvQueryTest_GameplayTags.generated.h"

UCLASS(MinimalAPI)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TagQueryToMatch;
    
    UPROPERTY()
    bool bUpdatedToUseQuery;
    
    UPROPERTY()
    EGameplayContainerMatchType TagsToMatch;
    
    UPROPERTY()
    FGameplayTagContainer GameplayTags;
    
public:
    UEnvQueryTest_GameplayTags();
};

