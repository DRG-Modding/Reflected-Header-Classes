#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "NiagaraSettings.generated.h"

class UNiagaraEffectType;

UCLASS(DefaultConfig, Config=Niagara)
class NIAGARA_API UNiagaraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> AdditionalParameterTypes;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> AdditionalPayloadTypes;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> AdditionalParameterEnums;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultEffectType;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FText> QualityLevels;
    
private:
    UPROPERTY(Transient)
    UNiagaraEffectType* DefaultEffectTypePtr;
    
public:
    UNiagaraSettings();
};

