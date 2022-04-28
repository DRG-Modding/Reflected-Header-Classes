#pragma once
#include "CoreMinimal.h"
#include "OnARTransformUpdatedDelegate.h"
#include "OnARTrackingStateChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARTrackingState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ARPin.generated.h"

class USceneComponent;
class UWorld;
class UARTrackedGeometry;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARPin : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UARTrackedGeometry* TrackedGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* PinnedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LocalToTrackingTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LocalToAlignedTrackingTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARTrackingState TrackingState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnARTrackingStateChanged OnARTrackingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION()
    void DebugDraw(UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds) const;
    
};

