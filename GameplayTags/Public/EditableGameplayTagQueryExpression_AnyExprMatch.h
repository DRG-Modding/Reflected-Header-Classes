#pragma once
#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression.h"
#include "EditableGameplayTagQueryExpression_AnyExprMatch.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NonTransient)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UEditableGameplayTagQueryExpression*> Expressions;
    
    UEditableGameplayTagQueryExpression_AnyExprMatch();
};

