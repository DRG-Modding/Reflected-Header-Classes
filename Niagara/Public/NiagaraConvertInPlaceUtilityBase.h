#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "NiagaraConvertInPlaceUtilityBase.generated.h"

UCLASS(Abstract)
class NIAGARA_API UNiagaraConvertInPlaceUtilityBase : public UObject {
    GENERATED_BODY()
public:
    UNiagaraConvertInPlaceUtilityBase();
};

