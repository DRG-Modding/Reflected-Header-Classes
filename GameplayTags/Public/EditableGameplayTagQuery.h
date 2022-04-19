#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagQuery.h"
#include "EditableGameplayTagQuery.generated.h"

class UEditableGameplayTagQueryExpression;

UCLASS(CollapseCategories, EditInlineNew, Transient)
class GAMEPLAYTAGS_API UEditableGameplayTagQuery : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FString UserDescription;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced, meta=(AllowPrivateAccess=true))
    UEditableGameplayTagQueryExpression* RootExpression;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQueryExportText_Helper;
    
public:
    UEditableGameplayTagQuery();
};

