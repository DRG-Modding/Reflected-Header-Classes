#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SteamVRTrackingReferences.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSteamVRTrackingReferencesOnTrackedDeviceActivated, int32, DeviceID, FName, DeviceClass, const FString&, DeviceModel);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSteamVRTrackingReferencesOnTrackedDeviceDeactivated, int32, DeviceID, FName, DeviceClass, const FString&, DeviceModel);

UCLASS(BlueprintType)
class STEAMVRINPUTDEVICE_API USteamVRTrackingReferences : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamVRTrackingReferencesOnTrackedDeviceActivated OnTrackedDeviceActivated;
    
    UPROPERTY(BlueprintAssignable)
    FSteamVRTrackingReferencesOnTrackedDeviceDeactivated OnTrackedDeviceDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActiveDevicePollFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TrackingReferenceScale;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TArray<UStaticMeshComponent*> TrackingReferences;
    
    UFUNCTION(BlueprintCallable)
    bool ShowTrackingReferences(UStaticMesh* TrackingReferenceMesh);
    
    UFUNCTION(BlueprintCallable)
    void HideTrackingReferences();
    
    USteamVRTrackingReferences();
};

