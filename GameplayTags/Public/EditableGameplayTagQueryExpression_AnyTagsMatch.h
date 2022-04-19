#pragma once
#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression.h"
#include "GameplayTagContainer.h"
#include "EditableGameplayTagQueryExpression_AnyTagsMatch.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NonTransient)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UEditableGameplayTagQueryExpression_AnyTagsMatch();
};

