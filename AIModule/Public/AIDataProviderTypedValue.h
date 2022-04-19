#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.h"
#include "AIDataProviderTypedValue.generated.h"

USTRUCT()
struct AIMODULE_API FAIDataProviderTypedValue : public FAIDataProviderValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClass* PropertyType;
    
    FAIDataProviderTypedValue();
};

