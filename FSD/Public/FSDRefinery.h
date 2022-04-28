#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DropPod.h"
#include "ERefineryState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "EPipelineBuildState.h"
#include "EInputKeys.h"
#include "FSDRefinery.generated.h"

class APipelineSegment;
class APipelineStart;
class APipelineExtractorPod;
class USingleUsableComponent;
class UDialogDataAsset;
class ATrackBuilderItem;
class APlayerCharacter;

UCLASS(Blueprintable)
class FSD_API AFSDRefinery : public ADropPod {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRefineryStateDelegate, ERefineryState, InRefineryState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRefineryProgressDelegate, float, InProgress01);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRefineryPipelineSegmentDelegate, APipelineSegment*, InSegment);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRefineryPipelineDelegate, APipelineStart*, InPipelineStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRefineryExtractPodDelegate, APipelineExtractorPod*, InExtractorPod);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRefineryStateDelegate OnRefineryStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRefineryProgressDelegate OnRefineryProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRefineryPipelineDelegate OnPipelineRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRefineryPipelineSegmentDelegate OnPipelineSegmentPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRefineryExtractPodDelegate OnExtractorPodSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* UsableStartRefining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* UsableLaunchRocket;
    
    UPROPERTY(EditAnywhere)
    TMap<float, UDialogDataAsset*> ProgressMissionShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LaunchRocketButtonPressedShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrackBuilderItem> BuilderItem;
    
    UPROPERTY(EditAnywhere)
    float RefiningTotalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange PipelineBreakCoolDown;
    
    UPROPERTY(EditAnywhere)
    float PipelineBreakTimePenaltyPerAdditionalPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range MaxSegmentBreakDowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SegmentBreakDownPenaltyPerAdditionalPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RefineryState, meta=(AllowPrivateAccess=true))
    ERefineryState RefineryState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERefineryState PreviousRefineryState;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 RefiningProgressReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APipelineStart*> PipelineStarts;
    
public:
    AFSDRefinery();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRefineryState(ERefineryState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRefineryStateChanged(ERefineryState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePipelineStateChanged(APipelineStart* InPipeline, EPipelineBuildState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePipelineStartReady(APipelineStart* InPipelineStart);
    
    UFUNCTION(BlueprintCallable)
    void OnStartRefiningPressed(APlayerCharacter* InCharacter, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RefineryState(ERefineryState InOldState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterRegistered(APlayerCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnPipelineStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectivesChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchRocketPressed(APlayerCharacter* InCharacter, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintPure)
    float GetRefiningProgress() const;
    
};

