#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderTypedValue.h"
#include "AIDataProviderIntValue.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDataProviderIntValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 DefaultValue;
    
    FAIDataProviderIntValue();
};

