#pragma once
#include "CoreMinimal.h"
#include "CellId.h"
#include "CellBox.generated.h"

USTRUCT()
struct FCellBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCellId Min;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCellId Max;
    
    FSDENGINE_API FCellBox();
};

