#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "VRNotificationsComponent.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDTrackingInitializedDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDRecenteredDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDRemovedFromHeadDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDLostDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDPutOnHeadDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDReconnectedDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDConnectCanceledDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentVRControllerRecenteredDelegate);

UCLASS()
class HEADMOUNTEDDISPLAY_API UVRNotificationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentHMDTrackingInitializedDelegate HMDTrackingInitializedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentHMDRecenteredDelegate HMDRecenteredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentHMDLostDelegate HMDLostDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentHMDReconnectedDelegate HMDReconnectedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentHMDConnectCanceledDelegate HMDConnectCanceledDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentHMDPutOnHeadDelegate HMDPutOnHeadDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentHMDRemovedFromHeadDelegate HMDRemovedFromHeadDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsComponentVRControllerRecenteredDelegate VRControllerRecenteredDelegate;
    
    UVRNotificationsComponent();
};

