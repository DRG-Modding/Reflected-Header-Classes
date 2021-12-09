#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "EDashPointsGenerationMode.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "DashPoints.generated.h"

class UHealthComponentBase;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDashPointsOnStopDashEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDashPointsOnStartDashEvent);

UCLASS(BlueprintType)
class UDashPoints : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDashPointsOnStartDashEvent OnStartDashEvent;
    
    UPROPERTY(BlueprintAssignable)
    FDashPointsOnStopDashEvent OnStopDashEvent;
    
protected:
    UPROPERTY(Replicated)
    FVector_NetQuantize DashLocation;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve DashSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRangeFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRangeFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinHeightAboveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHeightAboveTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float safeReduction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AcceptedDashradius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DashSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SlowdownRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 IgnoreTheClosestPoints;
    
    UPROPERTY(EditDefaultsOnly)
    EDashPointsGenerationMode GenerationMode;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Dashing)
    bool IsDashing;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IgnoreRules;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateDashPointData();
    
    UFUNCTION(BlueprintCallable)
    void StopDashing();
    
    UFUNCTION(BlueprintCallable)
    void StartDashing();
    
    UFUNCTION()
    void OnRep_Dashing();
    
protected:
    UFUNCTION()
    void OnParentDeath(UHealthComponentBase* Health);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetDashPoint(AActor* fromTarget, bool& success);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDashPoints();
};

