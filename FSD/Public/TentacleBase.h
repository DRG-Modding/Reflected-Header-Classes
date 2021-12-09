#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EnemyPawn.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "TentacleTarget.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "TentacleBase.generated.h"

class USplineComponent;
class AStabberVineRoot;
class USceneComponent;

UCLASS(Abstract)
class ATentacleBase : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    USplineComponent* SplineComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FTransform RestTransform;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform LastTransform;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform DesiredTransform;
    
    UPROPERTY(ReplicatedUsing=OnRep_DesiredTarget)
    FTentacleTarget DesiredTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite)
    float MovementAlpha;
    
    UPROPERTY(BlueprintReadWrite)
    float HeadMovementDuration;
    
    UPROPERTY(BlueprintReadWrite)
    float CanSwayCooldown;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D SwayRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NeckBaseTangentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NeckBasePositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NeckBaseTangentOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NeckTopTangentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NeckTopPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NeckTopTangentOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DurationTentacleRetract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DurationTentacleFoldout;
    
    UPROPERTY(Export, Transient)
    USceneComponent* HeadRoot;
    
    UPROPERTY(Export, Transient)
    USceneComponent* HeadRotator;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Recieve_OnRep_Owner();
    
    UFUNCTION()
    void OnRep_DesiredTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration, bool UseSpring);
    
protected:
    UFUNCTION(BlueprintPure)
    AStabberVineRoot* GetStabberVineRoot() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetHeadRotator();
    
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetHeadRoot();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATentacleBase();
};
