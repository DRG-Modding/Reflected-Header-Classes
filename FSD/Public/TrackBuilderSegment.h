#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TrackBuilderPoint.h"
#include "ETrackBuildPlacementState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TrackBuilderSegment.generated.h"

class UTrackBuilderUsable;
class APlayerCharacter;
class UTrackBuilderConnectPoint;
class AItem;
class ATrackBuilderSegment;

UCLASS()
class FSD_API ATrackBuilderSegment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTrackBuilderUsable* NextSegmentUsable;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> BuiltByCharacter;
    
    UPROPERTY(BlueprintReadWrite, Export, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTrackBuilderUsable> BuiltFromUsable;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTrackBuilderPoint SegmentEndTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SegmentEndTransform, meta=(AllowPrivateAccess=true))
    FTrackBuilderPoint ServerSegmentEndTransform;
    
public:
    ATrackBuilderSegment();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool InPlacementValid, AItem* PlaceableItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivPlacementValidChanged(bool InIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementChangedEnd(const FTransform& NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementChangedBegin(const FTransform& NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceiveCanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SegmentEndTransform();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrackBuilderUsable* GetTrackStartUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTrackStartActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetStartTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSegmentEndTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETrackBuildPlacementState GetPlacementState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATrackBuilderSegment* GetNextSegment(bool bForward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSegmentEndTransformValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrackBuilderConnectPoint* GetConnectPoint() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint, AItem* PlaceableItem);
    
};

