#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=EGameplayContainerMatchType -FallbackName=EGameplayContainerMatchType
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EnvQueryTest_GameplayTags.generated.h"

UCLASS(MinimalAPI)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQueryToMatch;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUpdatedToUseQuery;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EGameplayContainerMatchType TagsToMatch;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    UEnvQueryTest_GameplayTags();
};

