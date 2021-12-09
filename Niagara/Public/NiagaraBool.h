#pragma once
#include "CoreMinimal.h"
#include "NiagaraBool.generated.h"

USTRUCT()
struct FNiagaraBool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 Value;
    
public:
    NIAGARA_API FNiagaraBool();
};

