#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_BlackboardBase.h"
#include "EBTBlackboardRestart.h"
#include "BTDecorator_Blackboard.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(EditAnywhere)
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedDescription;
    
    UPROPERTY(EditAnywhere)
    uint8 OperationType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTBlackboardRestart::Type> NotifyObserver;
    
public:
    UBTDecorator_Blackboard();
};

