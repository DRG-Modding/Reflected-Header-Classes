#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "RaycastDebugProbe.generated.h"

class UTerrainType;

UCLASS()
class ARaycastDebugProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainType* TerrainType;
    
    ARaycastDebugProbe();
};

