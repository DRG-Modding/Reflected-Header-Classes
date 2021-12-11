#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptDataInterfaceCompileInfo.h"
#include "NiagaraStatScope.h"
#include "NiagaraParameters.h"
#include "VMExternalFunctionBindingInfo.h"
#include "NiagaraVariable.h"
#include "ENiagaraScriptCompileStatus.h"
#include "NiagaraScriptDataUsageInfo.h"
#include "NiagaraDataSetID.h"
#include "NiagaraDataSetProperties.h"
//CROSS-MODULE INCLUDE: NiagaraShader NiagaraDataInterfaceGPUParamInfo
#include "SimulationStageMetaData.h"
#include "NiagaraVMExecutableData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVMExecutableData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> ByteCode;
    
    UPROPERTY(Transient)
    TArray<uint8> OptimizedByteCode;
    
    UPROPERTY()
    int32 NumTempRegisters;
    
    UPROPERTY()
    int32 NumUserPtrs;
    
    UPROPERTY()
    FNiagaraParameters Parameters;
    
    UPROPERTY()
    FNiagaraParameters InternalParameters;
    
    UPROPERTY()
    TMap<FName, FNiagaraParameters> DataSetToParameters;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Attributes;
    
    UPROPERTY()
    FNiagaraScriptDataUsageInfo DataUsage;
    
    UPROPERTY()
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
    
    UPROPERTY()
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
    
    UPROPERTY()
    TArray<FNiagaraDataSetID> ReadDataSets;
    
    UPROPERTY()
    TArray<FNiagaraDataSetProperties> WriteDataSets;
    
    UPROPERTY()
    TArray<FNiagaraStatScope> StatScopes;
    
    UPROPERTY()
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;
    
    UPROPERTY()
    ENiagaraScriptCompileStatus LastCompileStatus;
    
    UPROPERTY()
    TArray<FSimulationStageMetaData> SimulationStageMetaData;
    
    FNiagaraVMExecutableData();
};

