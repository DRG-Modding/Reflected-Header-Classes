#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "EARTrackingState.h"
#include "EARObjectClassification.h"
#include "ARTrackedGeometry.generated.h"

class UMRMeshComponent;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARTrackedGeometry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid UniqueId;
    
protected:
    UPROPERTY()
    FTransform LocalToTrackingTransform;
    
    UPROPERTY()
    FTransform LocalToAlignedTrackingTransform;
    
    UPROPERTY()
    EARTrackingState TrackingState;
    
    UPROPERTY(Export)
    UMRMeshComponent* UnderlyingMesh;
    
    UPROPERTY()
    EARObjectClassification ObjectClassification;
    
private:
    UPROPERTY()
    int32 LastUpdateFrameNumber;
    
    UPROPERTY()
    FName DebugName;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTracked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMRMeshComponent* GetUnderlyingMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARTrackingState GetTrackingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARObjectClassification GetObjectClassification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocalToWorldTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocalToTrackingTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastUpdateTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastUpdateFrameNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDebugName() const;
    
    UARTrackedGeometry();
};

