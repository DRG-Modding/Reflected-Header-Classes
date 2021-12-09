#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ChaosPhysicsCollisionInfo.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "ChaosSolverEngineBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class CHAOSSOLVERENGINE_API UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
    
    UChaosSolverEngineBlueprintLibrary();
};

