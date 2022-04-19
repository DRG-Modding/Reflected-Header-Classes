#pragma once
#include "CoreMinimal.h"
#include "NiagaraMaterialOverride.generated.h"

class UMaterialInterface;
class UNiagaraRendererProperties;

USTRUCT(BlueprintType)
struct FNiagaraMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 MaterialSubIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNiagaraRendererProperties* EmitterRendererProperty;
    
    NIAGARA_API FNiagaraMaterialOverride();
};

