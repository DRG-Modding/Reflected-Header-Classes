#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "NiagaraPreviewBase.generated.h"

class UNiagaraSystem;

UCLASS(Abstract, Transient)
class ANiagaraPreviewBase : public AActor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSystem(UNiagaraSystem* InSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);
    
    ANiagaraPreviewBase();
};

