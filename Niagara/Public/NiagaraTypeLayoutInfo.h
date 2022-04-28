#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraTypeLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint32> FloatComponentByteOffsets;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> FloatComponentRegisterOffsets;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> Int32ComponentByteOffsets;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> Int32ComponentRegisterOffsets;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> HalfComponentByteOffsets;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> HalfComponentRegisterOffsets;
    
    NIAGARA_API FNiagaraTypeLayoutInfo();
};

