#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EARSpatialMeshUsageFlags.h"
#include "EARObjectClassification.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARTrackingState.h"
#include "ARTrackedGeometry.generated.h"

class UMRMeshComponent;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARTrackedGeometry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UniqueId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LocalToTrackingTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LocalToAlignedTrackingTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARTrackingState TrackingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UMRMeshComponent* UnderlyingMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARObjectClassification ObjectClassification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARSpatialMeshUsageFlags SpatialMeshUsageFlags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUpdateFrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
public:
    UARTrackedGeometry();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTracked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpatialMeshUsageFlag(const EARSpatialMeshUsageFlags InFlag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMRMeshComponent* GetUnderlyingMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARTrackingState GetTrackingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARObjectClassification GetObjectClassification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocalToWorldTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocalToTrackingTransform() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastUpdateTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastUpdateFrameNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDebugName() const;
    
};

