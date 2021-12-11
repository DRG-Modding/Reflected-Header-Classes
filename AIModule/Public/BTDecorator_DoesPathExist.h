#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
#include "EPathExistanceQueryType.h"
#include "BTDecorator_DoesPathExist.generated.h"

class UNavigationQueryFilter;

UCLASS()
class AIMODULE_API UBTDecorator_DoesPathExist : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyA;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyB;
    
public:
    UPROPERTY()
    uint8 bUseSelf: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPathExistanceQueryType::Type> PathQueryType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UBTDecorator_DoesPathExist();
};

