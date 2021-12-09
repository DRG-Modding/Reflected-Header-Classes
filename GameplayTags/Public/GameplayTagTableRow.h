#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "GameplayTagTableRow.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Tag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DevComment;
    
    GAMEPLAYTAGS_API FGameplayTagTableRow();
};

