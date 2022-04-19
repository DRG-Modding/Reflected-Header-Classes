#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ChaosSolverConfiguration -FallbackName=ChaosSolverConfiguration
#include "EClusterConnectionTypeEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverCollisionFilterSettings -FallbackName=SolverCollisionFilterSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverBreakingFilterSettings -FallbackName=SolverBreakingFilterSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverTrailingFilterSettings -FallbackName=SolverTrailingFilterSettings
#include "ChaosDebugSubstepControl.h"
#include "ChaosSolverActor.generated.h"

class UBillboardComponent;
class UChaosGameplayEventDispatcher;

UCLASS()
class CHAOSSOLVERENGINE_API AChaosSolverActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosSolverConfiguration Properties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TimeStepMultiplier;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CollisionIterations;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PushOutIterations;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PushOutPairIterations;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ClusterConnectionFactor;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EClusterConnectionTypeEnum ClusterUnionConnectionType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DoGenerateCollisionData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSolverCollisionFilterSettings CollisionFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DoGenerateBreakingData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSolverBreakingFilterSettings BreakingFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DoGenerateTrailingData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSolverTrailingFilterSettings TrailingFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MassScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bGenerateContactGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosDebugSubstepControl ChaosDebugSubstepControl;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;
    
public:
    AChaosSolverActor();
    UFUNCTION(BlueprintCallable)
    void SetSolverActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetAsCurrentWorldSolver();
    
};

