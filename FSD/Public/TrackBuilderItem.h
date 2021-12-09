#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "PlaceableInterface.h"
#include "EPlaceableObstructionType.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TrackBuilderItem.generated.h"

class UTrackBuilderConnectPoint;
class UCrosshairAggregator;
class ATrackBuilderSegment;
class UTrackBuilderUsable;

UCLASS(Abstract)
class FSD_API ATrackBuilderItem : public AAnimatedItem, public IPlaceableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCrosshairAggregator* CrosshairAggregator;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EPlaceableObstructionType ObstructionType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector ObstructionLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector GroundNormal;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATrackBuilderSegment> DefaultSegmentType;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_NextSegment)
    ATrackBuilderSegment* NextSegment;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsPlacingSegment;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool bPlacementValid, bool InUpdateServer);
    
protected:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerUpdatePlacement(const FTransform& InTransform, const bool bPlacementValid, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerFinishPlacement(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelPlacement();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerBeginPlaceSegment(UTrackBuilderUsable* InUsable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBeginPlaceSegment();
    
    UFUNCTION()
    void OnRep_NextSegment();
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<ATrackBuilderSegment> GetSegmentType() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishPlacement(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint);
    
    UFUNCTION(BlueprintCallable)
    void CancelPlacement();
    
    UFUNCTION(BlueprintPure)
    FVector AdjustInitialLocation(const FVector& Location) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATrackBuilderItem();
};

