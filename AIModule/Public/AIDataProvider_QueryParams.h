#pragma once
#include "CoreMinimal.h"
#include "AIDataProvider.h"
#include "AIDataProvider_QueryParams.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class AIMODULE_API UAIDataProvider_QueryParams : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool boolValue;
    
    UAIDataProvider_QueryParams();
};

