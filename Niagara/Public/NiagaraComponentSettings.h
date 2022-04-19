#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraEmitterNameSettingsRef.h"
#include "NiagaraComponentSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class NIAGARA_API UNiagaraComponentSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TSet<FName> SuppressActivationList;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TSet<FName> ForceAutoPooolingList;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList;
    
    UNiagaraComponentSettings();
};

