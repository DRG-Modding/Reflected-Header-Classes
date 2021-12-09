#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameplayTagQuery.h"
#include "EditableGameplayTagQuery.generated.h"

class UEditableGameplayTagQueryExpression;

UCLASS(CollapseCategories, EditInlineNew, Transient)
class GAMEPLAYTAGS_API UEditableGameplayTagQuery : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString UserDescription;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UEditableGameplayTagQueryExpression* RootExpression;
    
private:
    UPROPERTY()
    FGameplayTagQuery TagQueryExportText_Helper;
    
public:
    UEditableGameplayTagQuery();
};

