#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine NavAgentInterface
//CROSS-MODULE INCLUDE: Engine NavPathObserverInterface
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ENavCostDisplay.h"
//CROSS-MODULE INCLUDE: Engine NavAgentProperties
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "NavigationTestingActor.generated.h"

class UNavigationInvokerComponent;
class UCapsuleComponent;
class ANavigationData;
class ANavigationTestingActor;
class UNavigationQueryFilter;

UCLASS()
class NAVIGATIONSYSTEM_API ANavigationTestingActor : public AActor, public INavAgentInterface, public INavPathObserverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(EditAnywhere, Export)
    UNavigationInvokerComponent* InvokerComponent;
    
    UPROPERTY(EditAnywhere)
    uint8 bActAsNavigationInvoker: 1;
    
public:
    UPROPERTY(EditAnywhere)
    FNavAgentProperties NavAgentProps;
    
    UPROPERTY(EditAnywhere)
    FVector QueryingExtent;
    
    UPROPERTY(Transient)
    ANavigationData* MyNavData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector ProjectedLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bProjectedLocationValid: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSearchStart: 1;
    
    UPROPERTY(EditAnywhere)
    float CostLimitFactor;
    
    UPROPERTY(EditAnywhere)
    float MinimumCostLimit;
    
    UPROPERTY(EditAnywhere)
    uint8 bBacktracking: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseHierarchicalPathfinding: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGatherDetailedInfo: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawDistanceToWall: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowNodePool: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowBestPath: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowDiffWithPreviousStep: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldBeVisibleInGame: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavCostDisplay::Type> CostDisplayMode;
    
    UPROPERTY(EditAnywhere)
    FVector2D TextCanvasOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathExist: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathIsPartial: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathSearchOutOfNodes: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float PathfindingTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float PathCost;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    int32 PathfindingSteps;
    
    UPROPERTY(EditAnywhere)
    ANavigationTestingActor* OtherActor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditInstanceOnly, Transient)
    int32 ShowStepIndex;
    
    UPROPERTY(EditAnywhere)
    float OffsetFromCornersDistance;
    
    ANavigationTestingActor();
};

