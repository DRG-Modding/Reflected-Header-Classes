#pragma once
#include "CoreMinimal.h"
#include "CellId.generated.h"

USTRUCT()
struct FSDENGINE_API FCellId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Z;
    
    FCellId();
};

