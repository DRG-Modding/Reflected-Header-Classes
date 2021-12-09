#pragma once
#include "CoreMinimal.h"
#include "EARObjectClassification.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "EARTrackingState.h"
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
    UFUNCTION(BlueprintPure)
    bool IsTracked() const;
    
    UFUNCTION(BlueprintPure)
    UMRMeshComponent* GetUnderlyingMesh();
    
    UFUNCTION(BlueprintPure)
    EARTrackingState GetTrackingState() const;
    
    UFUNCTION(BlueprintPure)
    EARObjectClassification GetObjectClassification() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalToWorldTransform() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalToTrackingTransform() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastUpdateTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLastUpdateFrameNumber() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDebugName() const;
    
    UARTrackedGeometry();
};

