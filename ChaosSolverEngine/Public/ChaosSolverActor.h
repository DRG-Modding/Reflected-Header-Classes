#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ChaosSolverConfiguration -FallbackName=ChaosSolverConfiguration
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverTrailingFilterSettings -FallbackName=SolverTrailingFilterSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverCollisionFilterSettings -FallbackName=SolverCollisionFilterSettings
#include "EClusterConnectionTypeEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=SolverBreakingFilterSettings -FallbackName=SolverBreakingFilterSettings
#include "ChaosDebugSubstepControl.h"
#include "ChaosSolverActor.generated.h"

class UBillboardComponent;
class UChaosGameplayEventDispatcher;

UCLASS(Blueprintable)
class CHAOSSOLVERENGINE_API AChaosSolverActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosSolverConfiguration Properties;
    
    UPROPERTY(EditAnywhere)
    float TimeStepMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushOutIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushOutPairIterations;
    
    UPROPERTY(EditAnywhere)
    float ClusterConnectionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClusterConnectionTypeEnum ClusterUnionConnectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoGenerateCollisionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverCollisionFilterSettings CollisionFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoGenerateBreakingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverBreakingFilterSettings BreakingFilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoGenerateTrailingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolverTrailingFilterSettings TrailingFilterSettings;
    
    UPROPERTY(EditAnywhere)
    float MassScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateContactGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFloor;
    
    UPROPERTY(EditAnywhere)
    float FloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosDebugSubstepControl ChaosDebugSubstepControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;
    
public:
    AChaosSolverActor();
    UFUNCTION(BlueprintCallable)
    void SetSolverActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetAsCurrentWorldSolver();
    
};

