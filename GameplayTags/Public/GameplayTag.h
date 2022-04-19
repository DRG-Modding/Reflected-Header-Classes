#pragma once
#include "CoreMinimal.h"
#include "GameplayTag.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
public:
    FGameplayTag();
};

