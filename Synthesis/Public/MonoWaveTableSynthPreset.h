#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "MonoWaveTableSynthPreset.generated.h"

UCLASS(BlueprintType)
class SYNTHESIS_API UMonoWaveTableSynthPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PresetName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bLockKeyframesToGridBool: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LockKeyframesToGrid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WaveTableResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NonTransactional)
    TArray<FRuntimeFloatCurve> WaveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNormalizeWaveTables: 1;
    
    UMonoWaveTableSynthPreset();
};

