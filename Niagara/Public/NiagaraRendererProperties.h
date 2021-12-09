#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: NiagaraCore NiagaraMergeable
#include "NiagaraRendererProperties.generated.h"

UCLASS(Abstract)
class NIAGARA_API UNiagaraRendererProperties : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SortOrderHint;
    
    UPROPERTY()
    bool bIsEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bMotionBlurEnabled;
    
    UNiagaraRendererProperties();
};

