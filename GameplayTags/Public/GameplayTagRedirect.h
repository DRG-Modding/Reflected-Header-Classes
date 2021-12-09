#pragma once
#include "CoreMinimal.h"
#include "GameplayTagRedirect.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTagRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName OldTagName;
    
    UPROPERTY(EditAnywhere)
    FName NewTagName;
    
    FGameplayTagRedirect();
};

