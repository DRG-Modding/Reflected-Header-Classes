#pragma once
#include "CoreMinimal.h"
#include "GameplayTagTableRow.h"
#include "RestrictedGameplayTagTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowNonRestrictedChildren;
    
    GAMEPLAYTAGS_API FRestrictedGameplayTagTableRow();
};

