#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "EARTrackingState.h"
#include "ARPin.generated.h"

class UWorld;
class USceneComponent;
class UARTrackedGeometry;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARPinOnARTrackingStateChanged, EARTrackingState, NewTrackingState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARPinOnARTransformUpdated, const FTransform&, OldToNewTransform);

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARPin : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UARTrackedGeometry* TrackedGeometry;
    
    UPROPERTY(Export)
    USceneComponent* PinnedComponent;
    
    UPROPERTY()
    FTransform LocalToTrackingTransform;
    
    UPROPERTY()
    FTransform LocalToAlignedTrackingTransform;
    
    UPROPERTY()
    EARTrackingState TrackingState;
    
    UPROPERTY(BlueprintAssignable)
    FARPinOnARTrackingStateChanged OnARTrackingStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FARPinOnARTransformUpdated OnARTransformUpdated;
    
public:
    UFUNCTION(BlueprintPure)
    EARTrackingState GetTrackingState() const;
    
    UFUNCTION(BlueprintPure)
    UARTrackedGeometry* GetTrackedGeometry() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetPinnedComponent() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalToWorldTransform() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalToTrackingTransform() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDebugName() const;
    
    UFUNCTION()
    void DebugDraw(UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds) const;
    
    UARPin();
};

