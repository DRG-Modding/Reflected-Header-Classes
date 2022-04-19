#pragma once
#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression.h"
#include "GameplayTagContainer.h"
#include "EditableGameplayTagQueryExpression_NoTagsMatch.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NonTransient)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UEditableGameplayTagQueryExpression_NoTagsMatch();
};

