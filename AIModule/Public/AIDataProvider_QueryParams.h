#pragma once
#include "CoreMinimal.h"
#include "AIDataProvider.h"
#include "AIDataProvider_QueryParams.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class AIMODULE_API UAIDataProvider_QueryParams : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    bool boolValue;
    
    UAIDataProvider_QueryParams();
};

