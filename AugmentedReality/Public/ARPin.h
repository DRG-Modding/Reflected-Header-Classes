#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "EARTrackingState.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "ARPin.generated.h"

class UARTrackedGeometry;
class USceneComponent;
class UWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARPinOnARTrackingStateChanged, EARTrackingState, NewTrackingState);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARPinOnARTransformUpdated, const FTransform&, OldToNewTransform);

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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARTrackingState GetTrackingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UARTrackedGeometry* GetTrackedGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetPinnedComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocalToWorldTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocalToTrackingTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDebugName() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugDraw(UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds) const;
    
    UARPin();
};

