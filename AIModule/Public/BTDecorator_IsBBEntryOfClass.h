#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_BlackboardBase.h"
#include "BTDecorator_IsBBEntryOfClass.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UClass* TestClass;
    
public:
    UBTDecorator_IsBBEntryOfClass();
};

