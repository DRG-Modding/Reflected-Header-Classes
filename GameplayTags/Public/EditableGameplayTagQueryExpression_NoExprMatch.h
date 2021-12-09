#pragma once
#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression.h"
#include "EditableGameplayTagQueryExpression_NoExprMatch.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NonTransient)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UEditableGameplayTagQueryExpression*> Expressions;
    
    UEditableGameplayTagQueryExpression_NoExprMatch();
};

