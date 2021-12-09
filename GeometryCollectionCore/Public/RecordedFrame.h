#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SolverCollisionData.h"
#include "SolverBreakingData.h"
#include "SolverTrailingData.h"
#include "RecordedFrame.generated.h"

USTRUCT(BlueprintType)
struct FRecordedFrame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TArray<int32> TransformIndices;
    
    UPROPERTY()
    TArray<int32> PreviousTransformIndices;
    
    UPROPERTY()
    TArray<bool> DisabledFlags;
    
    UPROPERTY()
    TArray<FSolverCollisionData> Collisions;
    
    UPROPERTY()
    TArray<FSolverBreakingData> Breakings;
    
    UPROPERTY()
    TSet<FSolverTrailingData> Trailings;
    
    UPROPERTY()
    float Timestamp;
    
    GEOMETRYCOLLECTIONCORE_API FRecordedFrame();
};

