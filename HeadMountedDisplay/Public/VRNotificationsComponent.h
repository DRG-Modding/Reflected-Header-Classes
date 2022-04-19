#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "VRNotificationsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class HEADMOUNTEDDISPLAY_API UVRNotificationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate HMDTrackingInitializedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate HMDRecenteredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate HMDLostDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate HMDReconnectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate HMDConnectCanceledDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate HMDPutOnHeadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate HMDRemovedFromHeadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVRNotificationsDelegate VRControllerRecenteredDelegate;
    
    UVRNotificationsComponent();
};

