#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "VRNotificationsComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDTrackingInitializedDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDRecenteredDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDRemovedFromHeadDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDLostDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDPutOnHeadDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDReconnectedDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentHMDConnectCanceledDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVRNotificationsComponentVRControllerRecenteredDelegate);

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

