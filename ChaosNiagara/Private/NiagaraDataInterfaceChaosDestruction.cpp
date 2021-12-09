#include "NiagaraDataInterfaceChaosDestruction.h"

UNiagaraDataInterfaceChaosDestruction::UNiagaraDataInterfaceChaosDestruction() {
    this->DataSourceType = EDataSourceTypeEnum::ChaosNiagara_DataSourceType_Collision;
    this->DataProcessFrequency = 10;
    this->MaxNumberOfDataEntriesToSpawn = 50;
    this->DoSpawn = true;
    this->SpawnChance = 1.00f;
    this->SurfaceTypeToSpawn = -1;
    this->LocationFilteringMode = ELocationFilteringModeEnum::ChaosNiagara_LocationFilteringMode_Inclusive;
    this->LocationXToSpawn = ELocationXToSpawnEnum::ChaosNiagara_LocationXToSpawn_None;
    this->LocationYToSpawn = ELocationYToSpawnEnum::ChaosNiagara_LocationYToSpawn_None;
    this->LocationZToSpawn = ELocationZToSpawnEnum::ChaosNiagara_LocationZToSpawn_None;
    this->DataSortingType = EDataSortTypeEnum::ChaosNiagara_DataSortType_NoSorting;
    this->bGetExternalCollisionData = false;
    this->DoSpatialHash = false;
    this->MaxDataPerCell = 1;
    this->bApplyMaterialsFilter = false;
    this->bGetExternalBreakingData = true;
    this->bGetExternalTrailingData = false;
    this->InheritedVelocityMultiplier = 1.00f;
    this->RandomVelocityGenerationType = ERandomVelocityGenerationTypeEnum::ChaosNiagara_RandomVelocityGenerationType_RandomDistribution;
    this->SpreadAngleMax = 30.00f;
    this->MaxLatency = 1.00f;
    this->DebugType = EDebugTypeEnum::ChaosNiagara_DebugType_NoDebug;
    this->LastSpawnedPointID = -1;
    this->LastSpawnTime = -1.00f;
    this->SolverTime = 0.00f;
    this->TimeStampOfLastProcessedData = -1.00f;
}

