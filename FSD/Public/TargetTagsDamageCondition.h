#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "DamageCondition.h"
#include "TargetTagsDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetTagsDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery tagQuery;
    
public:
    UTargetTagsDamageCondition();
};

