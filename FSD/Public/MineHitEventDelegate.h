#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MineHitEventDelegate.generated.h"

class UTerrainMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMineHitEvent, UTerrainMaterial*, TerrainMaterial, const FVector&, Location);

