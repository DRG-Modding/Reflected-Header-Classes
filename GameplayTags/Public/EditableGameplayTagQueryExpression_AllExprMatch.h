#pragma once
#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression.h"
#include "EditableGameplayTagQueryExpression_AllExprMatch.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NonTransient)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UEditableGameplayTagQueryExpression*> Expressions;
    
    UEditableGameplayTagQueryExpression_AllExprMatch();
};

