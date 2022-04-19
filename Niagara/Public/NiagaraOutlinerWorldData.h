#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerSystemData.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraOutlinerWorldData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerWorldData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FNiagaraOutlinerSystemData> Systems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBegunPlay;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WorldType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NetMode;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData AveragePerFrameTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData MaxPerFrameTime;
    
    NIAGARA_API FNiagaraOutlinerWorldData();
};

