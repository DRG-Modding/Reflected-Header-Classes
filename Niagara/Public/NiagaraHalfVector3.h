#pragma once
#include "CoreMinimal.h"
#include "NiagaraHalfVector3.generated.h"

USTRUCT()
struct FNiagaraHalfVector3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Z;
    
    NIAGARA_API FNiagaraHalfVector3();
};

