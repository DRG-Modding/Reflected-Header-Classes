#pragma once
#include "CoreMinimal.h"
#include "ChaosPhysicsCollisionInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ChaosSolverEngineBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class CHAOSSOLVERENGINE_API UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChaosSolverEngineBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
    
};

