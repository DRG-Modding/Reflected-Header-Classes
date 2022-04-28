#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DPICustomScalingRule -FallbackName=DPICustomScalingRule
#include "FSDCustomDPIScalingRule.generated.h"

UCLASS(Blueprintable)
class UFSDCustomDPIScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UFSDCustomDPIScalingRule();
};

