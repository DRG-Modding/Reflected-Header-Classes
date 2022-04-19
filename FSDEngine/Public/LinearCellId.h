#pragma once
#include "CoreMinimal.h"
#include "LinearCellId.generated.h"

USTRUCT()
struct FLinearCellId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 X;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 Y;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 Z;
    
    FSDENGINE_API FLinearCellId();
};

