#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraEditorDataBase.generated.h"

UCLASS(Abstract, MinimalAPI)
class UNiagaraEditorDataBase : public UObject {
    GENERATED_BODY()
public:
    UNiagaraEditorDataBase();
};

