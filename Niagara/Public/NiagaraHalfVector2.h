#pragma once
#include "CoreMinimal.h"
#include "NiagaraHalfVector2.generated.h"

USTRUCT()
struct FNiagaraHalfVector2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Y;
    
    NIAGARA_API FNiagaraHalfVector2();
};

