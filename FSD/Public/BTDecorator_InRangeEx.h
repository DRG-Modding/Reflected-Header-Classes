#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=FAIDistanceType -FallbackName=FAIDistanceType
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_BlackboardBase -FallbackName=BTDecorator_BlackboardBase
#include "BTDecorator_InRangeEx.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_InRangeEx : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDistanceType GeometricDistanceType;
    
    UBTDecorator_InRangeEx();
};

