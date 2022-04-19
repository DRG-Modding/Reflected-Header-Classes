#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraTypeLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> FloatComponentByteOffsets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> FloatComponentRegisterOffsets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> Int32ComponentByteOffsets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> Int32ComponentRegisterOffsets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> HalfComponentByteOffsets;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> HalfComponentRegisterOffsets;
    
    NIAGARA_API FNiagaraTypeLayoutInfo();
};

