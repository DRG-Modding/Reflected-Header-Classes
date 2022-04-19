#pragma once
#include "CoreMinimal.h"
#include "AIDataProvider.h"
#include "AIDataProvider_QueryParams.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class AIMODULE_API UAIDataProvider_QueryParams : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool boolValue;
    
    UAIDataProvider_QueryParams();
};

