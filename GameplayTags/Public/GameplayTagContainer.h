#pragma once
#include "CoreMinimal.h"
#include "GameplayTag.h"
#include "GameplayTagContainer.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTagContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FGameplayTag> GameplayTags;
    
    UPROPERTY(Transient)
    TArray<FGameplayTag> ParentTags;
    
public:
    FGameplayTagContainer();
};

