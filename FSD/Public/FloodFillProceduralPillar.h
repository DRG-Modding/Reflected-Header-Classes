#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FloodFillProceduralPillar.generated.h"

class UPillarSettings;

UCLASS(EditInlineNew)
class UFloodFillProceduralPillar : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> Points;
    
    UPROPERTY(VisibleAnywhere)
    UPillarSettings* PillarSettings;
    
public:
    UFloodFillProceduralPillar();
};

