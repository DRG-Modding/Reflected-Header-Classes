#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_BlackboardBase -FallbackName=BTDecorator_BlackboardBase
#include "BTDecorator_AttackInRange.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_AttackInRange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackName;
    
    UBTDecorator_AttackInRange();
};

