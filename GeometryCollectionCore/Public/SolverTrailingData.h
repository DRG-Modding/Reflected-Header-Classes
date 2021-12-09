#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SolverTrailingData.generated.h"

USTRUCT(BlueprintType)
struct FSolverTrailingData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector Velocity;
    
    UPROPERTY()
    FVector AngularVelocity;
    
    UPROPERTY()
    float Mass;
    
    UPROPERTY()
    int32 ParticleIndex;
    
    UPROPERTY()
    int32 ParticleIndexMesh;
    
    GEOMETRYCOLLECTIONCORE_API FSolverTrailingData();
};

