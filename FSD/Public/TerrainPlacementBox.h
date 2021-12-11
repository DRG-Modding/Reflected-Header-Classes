#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ETerrainPlacementBoxType.h"
#include "TerrainPlacementBox.generated.h"

USTRUCT(BlueprintType)
struct FTerrainPlacementBox {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector Min;
    
    UPROPERTY(VisibleAnywhere)
    FVector Max;
    
    UPROPERTY(EditAnywhere)
    ETerrainPlacementBoxType PlacementType;
    
    FSD_API FTerrainPlacementBox();
};

