#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SolverCollisionData.generated.h"

USTRUCT(BlueprintType)
struct FSolverCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector AccumulatedImpulse;
    
    UPROPERTY()
    FVector Normal;
    
    UPROPERTY()
    FVector Velocity1;
    
    UPROPERTY()
    FVector Velocity2;
    
    UPROPERTY()
    FVector AngularVelocity1;
    
    UPROPERTY()
    FVector AngularVelocity2;
    
    UPROPERTY()
    float Mass1;
    
    UPROPERTY()
    float Mass2;
    
    UPROPERTY()
    int32 ParticleIndex;
    
    UPROPERTY()
    int32 LevelsetIndex;
    
    UPROPERTY()
    int32 ParticleIndexMesh;
    
    UPROPERTY()
    int32 LevelsetIndexMesh;
    
    GEOMETRYCOLLECTIONCORE_API FSolverCollisionData();
};

