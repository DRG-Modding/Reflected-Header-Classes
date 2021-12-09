#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "NiagaraScriptHighlight.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraScriptHighlight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    FNiagaraScriptHighlight();
};

