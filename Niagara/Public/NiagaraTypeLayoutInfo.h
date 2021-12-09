#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraTypeLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint32> FloatComponentByteOffsets;
    
    UPROPERTY()
    TArray<uint32> FloatComponentRegisterOffsets;
    
    UPROPERTY()
    TArray<uint32> Int32ComponentByteOffsets;
    
    UPROPERTY()
    TArray<uint32> Int32ComponentRegisterOffsets;
    
    NIAGARA_API FNiagaraTypeLayoutInfo();
};

