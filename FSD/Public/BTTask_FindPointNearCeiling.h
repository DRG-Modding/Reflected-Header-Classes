#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BTTask_FindPointNearCeiling.generated.h"

UCLASS(Blueprintable)
class UBTTask_FindPointNearCeiling : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CloseToCeilingBias;
    
    UPROPERTY(EditAnywhere)
    float LookForCeilingLength;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
public:
    UBTTask_FindPointNearCeiling();
};

