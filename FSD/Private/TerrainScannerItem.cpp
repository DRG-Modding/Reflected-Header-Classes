#include "TerrainScannerItem.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D

void ATerrainScannerItem::Server_SetIslookingAtMap_Implementation(bool lookingAtMap) {
}
bool ATerrainScannerItem::Server_SetIslookingAtMap_Validate(bool lookingAtMap) {
    return true;
}

void ATerrainScannerItem::OnRep_IsLookingAtMap() {
}

void ATerrainScannerItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATerrainScannerItem, IsLookingAtMap);
}

ATerrainScannerItem::ATerrainScannerItem() {
    this->TerrainScannerZoomDirection = 0;
    this->TerrainScannerStartAngle = 70.00f;
    this->TerrainScannerScale = 0.00f;
    this->DelayedTerrainScannerScale = 0.00f;
    this->DelayedTerrainScannerZoom = 0.00f;
    this->IsLookingAtMap = false;
    this->UpdateMapToolActors = false;
    this->EndFP = NULL;
    this->EndTP = NULL;
    this->TerrainScannerRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TerrainScannerRoot"));
    this->TerrainScannerCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("TerrainScannerCapture"));
}

