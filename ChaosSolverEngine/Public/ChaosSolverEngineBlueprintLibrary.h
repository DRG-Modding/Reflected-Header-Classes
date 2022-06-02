#pragma once
#include "CoreMinimal.h"
#include "ChaosPhysicsCollisionInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ChaosSolverEngineBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class CHAOSSOLVERENGINE_API UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChaosSolverEngineBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
    
};

