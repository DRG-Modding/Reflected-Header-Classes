#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.generated.h"

class UAIDataProvider;

USTRUCT()
struct AIMODULE_API FAIDataProviderValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UAIDataProvider* DataBinding;
    
    UPROPERTY(EditAnywhere)
    FName DataField;
    
    FAIDataProviderValue();
};

