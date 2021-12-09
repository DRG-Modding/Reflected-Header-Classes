#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EditableGameplayTagQueryExpression.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew, Transient)
class GAMEPLAYTAGS_API UEditableGameplayTagQueryExpression : public UObject {
    GENERATED_BODY()
public:
    UEditableGameplayTagQueryExpression();
};

