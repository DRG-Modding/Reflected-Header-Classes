#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RoomLinePoint.h"
#include "RoomLine.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FRoomLine {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* WallNoiseOverride;
    
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* CeilingNoiseOverride;
    
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* FloorNoiseOverride;
    
    UPROPERTY(VisibleAnywhere)
    bool UseDetailNoise;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FRoomLinePoint> Points;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> RightVectors;
    
    FSD_API FRoomLine();
};

