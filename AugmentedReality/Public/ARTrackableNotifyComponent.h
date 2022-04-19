#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TrackableDelegateDelegate.h"
#include "TrackablePlaneDelegateDelegate.h"
#include "TrackableImageDelegateDelegate.h"
#include "TrackablePointDelegateDelegate.h"
#include "TrackableFaceDelegateDelegate.h"
#include "TrackableEnvProbeDelegateDelegate.h"
#include "TrackableObjectDelegateDelegate.h"
#include "ARTrackableNotifyComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARTrackableNotifyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableDelegate OnAddTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableDelegate OnUpdateTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableDelegate OnRemoveTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackablePlaneDelegate OnAddTrackedPlane;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackablePlaneDelegate OnUpdateTrackedPlane;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackablePlaneDelegate OnRemoveTrackedPlane;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackablePointDelegate OnAddTrackedPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackablePointDelegate OnUpdateTrackedPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackablePointDelegate OnRemoveTrackedPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableImageDelegate OnAddTrackedImage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableImageDelegate OnUpdateTrackedImage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableImageDelegate OnRemoveTrackedImage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableFaceDelegate OnAddTrackedFace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableFaceDelegate OnUpdateTrackedFace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableFaceDelegate OnRemoveTrackedFace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableEnvProbeDelegate OnAddTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableEnvProbeDelegate OnUpdateTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableEnvProbeDelegate OnRemoveTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableObjectDelegate OnAddTrackedObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableObjectDelegate OnUpdateTrackedObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackableObjectDelegate OnRemoveTrackedObject;
    
    UARTrackableNotifyComponent();
};

