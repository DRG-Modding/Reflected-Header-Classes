#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ChaosDebugSubstepControl.h"
//CROSS-MODULE INCLUDE: ChaosSolvers SolverBreakingFilterSettings
#include "EClusterConnectionTypeEnum.h"
//CROSS-MODULE INCLUDE: ChaosSolvers SolverCollisionFilterSettings
//CROSS-MODULE INCLUDE: ChaosSolvers SolverTrailingFilterSettings
#include "ChaosSolverActor.generated.h"

class UChaosGameplayEventDispatcher;
class UBillboardComponent;

UCLASS()
class CHAOSSOLVERENGINE_API AChaosSolverActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeStepMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CollisionIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PushOutIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PushOutPairIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClusterConnectionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EClusterConnectionTypeEnum ClusterUnionConnectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoGenerateCollisionData;
    
    UPROPERTY(EditAnywhere)
    FSolverCollisionFilterSettings CollisionFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoGenerateBreakingData;
    
    UPROPERTY(EditAnywhere)
    FSolverBreakingFilterSettings BreakingFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoGenerateTrailingData;
    
    UPROPERTY(EditAnywhere)
    FSolverTrailingFilterSettings TrailingFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MassScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGenerateContactGraph;
    
    UPROPERTY(EditAnywhere)
    FChaosDebugSubstepControl ChaosDebugSubstepControl;
    
    UPROPERTY(Export)
    UBillboardComponent* SpriteComponent;
    
private:
    UPROPERTY(Export)
    UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSolverActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetAsCurrentWorldSolver();
    
    AChaosSolverActor();
};

