#pragma once
#include "CoreMinimal.h"
#include "AIDataProvider_QueryParams.h"
#include "AIDataProvider_Random.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    UPROPERTY(EditAnywhere)
    uint8 bInteger: 1;
    
public:
    UAIDataProvider_Random();
};

