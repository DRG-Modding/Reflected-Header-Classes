#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeySelector.h"
#include "BTDecorator.h"
#include "BTDecorator_ConeCheck.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTDecorator_ConeCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ConeOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ConeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Observed;
    
    UBTDecorator_ConeCheck();
};

