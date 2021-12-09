#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EInputKeys.h"
#include "ERessuplyPodState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PipelineFinish.generated.h"

class UTrackBuilderConnectPoint;
class USingleUsableComponent;
class APipelineExtractorPod;
class ARessuplyPod;
class APlayerCharacter;
class ATrackBuilderSegment;
class APipelineSegment;

UCLASS(Abstract)
class FSD_API APipelineFinish : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTrackBuilderConnectPoint* PipelineEndConnection;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* UsableOrderExtractor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<APipelineExtractorPod> ExtractPodClass;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ExtractorPod)
    APipelineExtractorPod* ExtractorPod;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PipelineCompleted)
    bool bPipelineCompleted;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePipelineCompleted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
    
    UFUNCTION()
    void OnRep_PipelineCompleted();
    
    UFUNCTION()
    void OnRep_ExtractorPod();
    
    UFUNCTION()
    void OnExtractorPodStateChanged(ARessuplyPod* InExtractorPod, ERessuplyPodState InState);
    
    UFUNCTION(BlueprintCallable)
    void OnExtractorPodOrdered(APlayerCharacter* InUser, EInputKeys Key);
    
    UFUNCTION()
    void OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
    UFUNCTION()
    void OnConnectedSegmentActivated(APipelineSegment* InSegment);
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetLandingOffset();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APipelineFinish();
};

