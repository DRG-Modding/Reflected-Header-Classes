#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionDebugDrawActorSelectedRigidBody.generated.h"

class AChaosSolverActor;
class AGeometryCollectionActor;

USTRUCT(BlueprintType)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ID;
    
    UPROPERTY(EditAnywhere)
    AChaosSolverActor* Solver;
    
    UPROPERTY(VisibleAnywhere)
    AGeometryCollectionActor* GeometryCollection;
    
    GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionDebugDrawActorSelectedRigidBody();
};

