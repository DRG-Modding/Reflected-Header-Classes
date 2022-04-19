#pragma once
#include "CoreMinimal.h"
#include "OnARTrackingStateChangedDelegate.h"
#include "EARTrackingState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "OnARTransformUpdatedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ARPin.generated.h"

class UARTrackedGeometry;
class USceneComponent;
class UWorld;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARPin : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UARTrackedGeometry* TrackedGeometry;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* PinnedComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform LocalToTrackingTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform LocalToAlignedTrackingTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARTrackingState TrackingState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnARTrackingStateChanged OnARTrackingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnARTransformUpdated OnARTransformUpdated;
    
public:
    UARPin();
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
    
};

