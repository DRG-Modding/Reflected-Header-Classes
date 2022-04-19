#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FXSystemAsset -FallbackName=FXSystemAsset
#include "NiagaraSystemScalabilityOverride.h"
#include "NiagaraSystemScalabilityOverrides.h"
#include "NiagaraSystemCompiledData.h"
#include "NiagaraUserRedirectionParameterStore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "NiagaraSystem.generated.h"

class UNiagaraEffectType;
class UNiagaraParameterCollectionInstance;
class UNiagaraScript;

UCLASS()
class NIAGARA_API UNiagaraSystem : public UFXSystemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDumpDebugSystemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDumpDebugEmitterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireCurrentFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFixedBounds: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraEffectType* EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideScalabilitySettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraEmitterHandle> EmitterHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNiagaraScript* SystemSpawnScript;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNiagaraScript* SystemUpdateScript;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraSystemCompiledData SystemCompiledData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraUserRedirectionParameterStore ExposedParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox FixedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarmupTickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmupTickDelta;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHasSystemScriptDIsWithPerInstanceData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bNeedsGPUContextInitForDataInterfaces;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FName> UserDINamesReadInSystemScripts;
    
public:
    UNiagaraSystem();
};

