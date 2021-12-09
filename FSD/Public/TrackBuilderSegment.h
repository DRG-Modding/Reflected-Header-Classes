#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderPoint.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ETrackBuildPlacementState.h"
#include "TrackBuilderSegment.generated.h"

class AItem;
class APlayerCharacter;
class UTrackBuilderUsable;
class UTrackBuilderConnectPoint;
class ATrackBuilderSegment;

UCLASS()
class FSD_API ATrackBuilderSegment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTrackBuilderUsable* NextSegmentUsable;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TWeakObjectPtr<APlayerCharacter> BuiltByCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export, Replicated, Transient)
    TWeakObjectPtr<UTrackBuilderUsable> BuiltFromUsable;
    
    UPROPERTY(Transient)
    FTrackBuilderPoint SegmentEndTransform;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SegmentEndTransform)
    FTrackBuilderPoint ServerSegmentEndTransform;
    
public:
    UFUNCTION(BlueprintCallable)
    bool UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool InPlacementValid, AItem* PlaceableItem);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivPlacementValidChanged(bool InIsValid);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlacementChangedEnd(const FTransform& NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlacementChangedBegin(const FTransform& NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintNativeEvent)
    bool ReceiveCanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION()
    void OnRep_SegmentEndTransform();
    
public:
    UFUNCTION(BlueprintPure)
    UTrackBuilderUsable* GetTrackStartUsable() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTrackStartActor() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetStartTransform() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetSegmentEndTransform() const;
    
    UFUNCTION(BlueprintPure)
    ETrackBuildPlacementState GetPlacementState() const;
    
    UFUNCTION(BlueprintPure)
    ATrackBuilderSegment* GetNextSegment(bool bForward) const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsSegmentEndTransformValid() const;
    
    UFUNCTION(BlueprintPure)
    UTrackBuilderConnectPoint* GetConnectPoint() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint, AItem* PlaceableItem);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATrackBuilderSegment();
};

