#pragma once
#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression.h"
#include "EditableGameplayTagQueryExpression_AnyExprMatch.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NonTransient)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UEditableGameplayTagQueryExpression*> Expressions;
    
    UEditableGameplayTagQueryExpression_AnyExprMatch();
};

