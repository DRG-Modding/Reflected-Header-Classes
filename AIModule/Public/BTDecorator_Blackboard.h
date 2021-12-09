#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_BlackboardBase.h"
#include "EBTBlackboardRestart.h"
#include "BTDecorator_Blackboard.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 IntValue;
    
    UPROPERTY(EditAnywhere)
    float FloatValue;
    
    UPROPERTY(EditAnywhere)
    FString StringValue;
    
    UPROPERTY()
    FString CachedDescription;
    
    UPROPERTY()
    uint8 OperationType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTBlackboardRestart::Type> NotifyObserver;
    
public:
    UBTDecorator_Blackboard();
};

