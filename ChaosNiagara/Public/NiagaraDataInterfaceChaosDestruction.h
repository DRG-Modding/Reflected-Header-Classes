#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Niagara NiagaraDataInterface
#include "EDataSourceTypeEnum.h"
#include "ELocationXToSpawnEnum.h"
#include "ELocationFilteringModeEnum.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ELocationZToSpawnEnum.h"
#include "ELocationYToSpawnEnum.h"
#include "EDebugTypeEnum.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EDataSortTypeEnum.h"
#include "ERandomVelocityGenerationTypeEnum.h"
#include "NiagaraDataInterfaceChaosDestruction.generated.h"

class AChaosSolverActor;
class UPhysicalMaterial;

UCLASS(EditInlineNew)
class CHAOSNIAGARA_API UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<AChaosSolverActor*> ChaosSolverActorSet;
    
    UPROPERTY(EditAnywhere)
    EDataSourceTypeEnum DataSourceType;
    
    UPROPERTY(EditAnywhere)
    int32 DataProcessFrequency;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumberOfDataEntriesToSpawn;
    
    UPROPERTY(EditAnywhere)
    bool DoSpawn;
    
    UPROPERTY(EditAnywhere)
    FVector2D SpawnMultiplierMinMax;
    
    UPROPERTY(EditAnywhere)
    float SpawnChance;
    
    UPROPERTY(EditAnywhere)
    FVector2D ImpulseToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D SpeedToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D MassToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D ExtentMinToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D ExtentMaxToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D VolumeToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D SolverTimeToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    int32 SurfaceTypeToSpawn;
    
    UPROPERTY(EditAnywhere)
    ELocationFilteringModeEnum LocationFilteringMode;
    
    UPROPERTY(EditAnywhere)
    ELocationXToSpawnEnum LocationXToSpawn;
    
    UPROPERTY(EditAnywhere)
    FVector2D LocationXToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    ELocationYToSpawnEnum LocationYToSpawn;
    
    UPROPERTY(EditAnywhere)
    FVector2D LocationYToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    ELocationZToSpawnEnum LocationZToSpawn;
    
    UPROPERTY(EditAnywhere)
    FVector2D LocationZToSpawnMinMax;
    
    UPROPERTY(EditAnywhere)
    EDataSortTypeEnum DataSortingType;
    
    UPROPERTY(VisibleAnywhere)
    bool bGetExternalCollisionData;
    
    UPROPERTY(EditAnywhere)
    bool DoSpatialHash;
    
    UPROPERTY(EditAnywhere)
    FVector SpatialHashVolumeMin;
    
    UPROPERTY(EditAnywhere)
    FVector SpatialHashVolumeMax;
    
    UPROPERTY(EditAnywhere)
    FVector SpatialHashVolumeCellSize;
    
    UPROPERTY(EditAnywhere)
    int32 MaxDataPerCell;
    
    UPROPERTY(EditAnywhere)
    bool bApplyMaterialsFilter;
    
    UPROPERTY(EditAnywhere)
    TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet;
    
    UPROPERTY(EditAnywhere)
    bool bGetExternalBreakingData;
    
    UPROPERTY(VisibleAnywhere)
    bool bGetExternalTrailingData;
    
    UPROPERTY(EditAnywhere)
    FVector2D RandomPositionMagnitudeMinMax;
    
    UPROPERTY(EditAnywhere)
    float InheritedVelocityMultiplier;
    
    UPROPERTY(EditAnywhere)
    ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;
    
    UPROPERTY(EditAnywhere)
    FVector2D RandomVelocityMagnitudeMinMax;
    
    UPROPERTY(EditAnywhere)
    float SpreadAngleMax;
    
    UPROPERTY(EditAnywhere)
    FVector VelocityOffsetMin;
    
    UPROPERTY(EditAnywhere)
    FVector VelocityOffsetMax;
    
    UPROPERTY(EditAnywhere)
    FVector2D FinalVelocityMagnitudeMinMax;
    
    UPROPERTY(EditAnywhere)
    float MaxLatency;
    
    UPROPERTY(EditAnywhere)
    EDebugTypeEnum DebugType;
    
protected:
    UPROPERTY()
    int32 LastSpawnedPointID;
    
    UPROPERTY()
    float LastSpawnTime;
    
    UPROPERTY()
    float SolverTime;
    
    UPROPERTY()
    float TimeStampOfLastProcessedData;
    
public:
    UNiagaraDataInterfaceChaosDestruction();
};

