#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineMeshAxis -FallbackName=ESplineMeshAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SplinePlant.generated.h"

class USplineComponent;
class USceneComponent;
class UAudioComponent;
class USoundCue;
class UStaticMesh;
class USplineMeshComponent;

UCLASS()
class FSD_API ASplinePlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* PlantSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* PlantEndPoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CueExtending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CueRetracting;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USoundCue* AudioExtending;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USoundCue* AudioRetracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledSegmentCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> SegmentMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESplineMeshAxis::Type> SegmentForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SegmentWidthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentWidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SegmentHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewLengthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewSeed;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SegmentMeshCache;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> CollisionMeshCache;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineInstance;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* SegmentMesh;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
public:
    ASplinePlant();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceivePrepareSpline(USplineComponent* InSplineComponent, int32 InSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMovementUpdated(float InDistanceProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMovementStarted(float InTargetDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMovementFinished(float InDistanceProgress);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlantTargetLengthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlantLengthPercent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetNearestLocationToLocalPlayer() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFullPlantLength() const;
    
};

