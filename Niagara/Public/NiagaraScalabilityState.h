#pragma once
#include "CoreMinimal.h"
#include "NiagaraScalabilityState.generated.h"

USTRUCT()
struct FNiagaraScalabilityState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float Significance;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCulled: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPreviousCulled: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCulledByDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCulledByInstanceCount: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCulledByVisibility: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCulledByGlobalBudget: 1;
    
    NIAGARA_API FNiagaraScalabilityState();
};

