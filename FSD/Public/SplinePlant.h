#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine ESplineMeshAxis
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SplinePlant.generated.h"

class UAudioComponent;
class USceneComponent;
class USplineComponent;
class USoundCue;
class UStaticMesh;
class USplineMeshComponent;

UCLASS()
class FSD_API ASplinePlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USplineComponent* PlantSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USceneComponent* PlantEndPoint;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* AudioComponent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundCue> CueExtending;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundCue> CueRetracting;
    
    UPROPERTY()
    USoundCue* AudioExtending;
    
    UPROPERTY()
    USoundCue* AudioRetracting;
    
    UPROPERTY(EditAnywhere)
    bool bEnabledSegmentCollision;
    
    UPROPERTY(EditAnywhere)
    float CarveRadius;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> SegmentMeshPtr;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESplineMeshAxis::Type> SegmentForwardAxis;
    
    UPROPERTY(EditAnywhere)
    float SegmentLength;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SegmentWidthCurve;
    
    UPROPERTY(EditAnywhere)
    float SegmentWidthScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SegmentHeightCurve;
    
    UPROPERTY(EditAnywhere)
    float SegmentHeightScale;
    
    UPROPERTY(EditAnywhere)
    float PreviewLengthPercent;
    
    UPROPERTY(EditAnywhere)
    int32 PreviewSeed;
    
    UPROPERTY(Export, Transient)
    TArray<USplineMeshComponent*> SegmentMeshCache;
    
    UPROPERTY(Export, Transient)
    TArray<USplineMeshComponent*> CollisionMeshCache;
    
    UPROPERTY(Export, Transient)
    USplineComponent* SplineInstance;
    
    UPROPERTY(Transient)
    UStaticMesh* SegmentMesh;
    
    UPROPERTY(Replicated)
    int32 Seed;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetPlantLengthPercent(float InTargetPercent, float InPercentPerSecond, float InEaseExp);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetPlantLength(float InTargetLength, float InDistancePerSecond, float InEaseExp);
    
    UFUNCTION(BlueprintCallable)
    void SetPlantLengthPercent(float InPercent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetSpline();
    
    UFUNCTION(BlueprintCallable)
    void ResetScale();
    
    UFUNCTION(BlueprintNativeEvent)
    void ReceivePrepareSpline(USplineComponent* InSplineComponent, int32 InSeed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveMovementUpdated(float InDistanceProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveMovementStarted(float InTargetDistance);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveMovementFinished(float InDistanceProgress);
    
public:
    UFUNCTION(BlueprintPure)
    float GetPlantTargetLengthPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlantLengthPercent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FTransform GetNearestLocationToLocalPlayer() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetFullPlantLength() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASplinePlant();
};

