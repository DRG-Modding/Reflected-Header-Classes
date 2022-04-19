#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "TargetTagsDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UTargetTagsDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery tagQuery;
    
public:
    UTargetTagsDamageCondition();
};

