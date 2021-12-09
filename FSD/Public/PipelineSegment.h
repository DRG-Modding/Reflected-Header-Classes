#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderSegment.h"
#include "EPipelineBuildState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine ETraceTypeQuery
#include "EInputKeys.h"
#include "PipelineSegment.generated.h"

class UMaterialInterface;
class APipelineSegment;
class APipelineStart;
class USingleUsableComponent;
class UStaticMesh;
class UDroneUseComponent;
class USimpleHealthComponent;
class USplineComponent;
class USplineMeshComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UTrackBuilderUsable;
class UPathfinderSplineSegmentCollisionComponent;
class APlayerCharacter;
class UHealthComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipelineSegmentOnPipelineBroken, APipelineSegment*, InPipelineSegment);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipelineSegmentOnPipelineRepaired, APipelineSegment*, InPipelineSegment);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipelineSegmentOnPipelineStateChanged, EPipelineBuildState, InPipelineState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipelineSegmentOnPipelineActivated, APipelineSegment*, InPipelineSegment);

UCLASS(Abstract)
class APipelineSegment : public ATrackBuilderSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPipelineSegmentOnPipelineBroken OnPipelineBroken;
    
    UPROPERTY(BlueprintAssignable)
    FPipelineSegmentOnPipelineRepaired OnPipelineRepaired;
    
    UPROPERTY(BlueprintAssignable)
    FPipelineSegmentOnPipelineActivated OnPipelineActivated;
    
    UPROPERTY(BlueprintAssignable)
    FPipelineSegmentOnPipelineStateChanged OnPipelineStateChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMeshUnassembled;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMeshAssembled;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMeshFinal;
    
    UPROPERTY(EditAnywhere)
    FVector EditorEndLocation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> CarvingTraceType;
    
    UPROPERTY(Transient)
    UMaterialInterface* NumberMaterial;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* RepairSegmentUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* ActivateSegmentUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDroneUseComponent* DroneUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* SegmentHealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* MovementSpline;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* MovementSplineRight;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* MovementSplineLeft;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* PipelineMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* PipelineOuterMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* PipelineCapMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* EndPostMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* EndPostMeshStatic;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPathfinderSplineSegmentCollisionComponent* PathfinderComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SegmentBroken)
    bool bSegmentBroken;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SegmentActivatedProgress)
    float SegmentActivatedProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPipelineBuildState PipelineState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APipelineStart> PipelineStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValidLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValidLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TooSharpExtraLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TooSteepExtraLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockedSphereSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BlockedExtraRaytraceRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockedExtraRaytraces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockedExtraRaytraceDist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockedRayTraceSuccesses;
    
    UFUNCTION(BlueprintCallable)
    void UpdateSplineMesh(USplineMeshComponent* InMesh, float InProgress, bool InMoveEndCap);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSegmentBroken(APlayerCharacter* InUser, bool InSegmentBroken);
    
    UFUNCTION(BlueprintCallable)
    void SetPipelineNumberMaterial(UMaterialInterface* InNumberMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetEndPostVisible(bool InVisible);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSegmentBrokenChanged(bool InSegmentBroken);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSegmentActivatedProgress(float InProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSegmentActivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlacementFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlacementBegin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRepaired(APlayerCharacter* InUser);
    
    UFUNCTION()
    void OnRep_SegmentBroken();
    
    UFUNCTION()
    void OnRep_SegmentActivatedProgress();
    
public:
    UFUNCTION(BlueprintPure)
    APipelineStart* GetPipelineStart() const;
    
    UFUNCTION(BlueprintPure)
    APipelineSegment* GetNextPipelineSegment(bool bForward) const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsSegmentActivated() const;
    
protected:
    UFUNCTION()
    void CallbackSegmentRepaired(APlayerCharacter* InUser, EInputKeys Key);
    
    UFUNCTION()
    void CallbackSegmentDestroyed(UHealthComponentBase* InHealth);
    
    UFUNCTION()
    void CallbackSegmentActivatedProgress(float InProgress);
    
    UFUNCTION()
    void CallbackSegmentActivated(APlayerCharacter* InUser, EInputKeys Key);
    
    UFUNCTION()
    void CallbackPipelineStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InState);
    
    UFUNCTION()
    void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    
    UFUNCTION()
    void CallbackDroneUsed(int32 TimesUsed);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APipelineSegment();
};

