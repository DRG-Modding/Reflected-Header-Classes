#pragma once
#include "CoreMinimal.h"
#include "ENiagaraVariantMode.h"
#include "NiagaraVariant.generated.h"

class UObject;
class UNiagaraDataInterface;

USTRUCT()
struct NIAGARA_API FNiagaraVariant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UObject* Object;
    
    UPROPERTY(EditAnywhere)
    UNiagaraDataInterface* DataInterface;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Bytes;
    
    UPROPERTY(EditAnywhere)
    ENiagaraVariantMode CurrentMode;
    
public:
    FNiagaraVariant();
};

