#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraTypeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UObject* ClassStructOrEnum;
    
    UPROPERTY(EditAnywhere)
    uint16 UnderlyingType;
    
    FNiagaraTypeDefinition();
};

