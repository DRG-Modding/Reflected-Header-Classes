#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ARTrackableNotifyComponent.generated.h"

class UARPlaneGeometry;
class UARTrackedObject;
class UARTrackedGeometry;
class UARTrackedPoint;
class UARTrackedImage;
class UARFaceGeometry;
class UAREnvironmentCaptureProbe;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnUpdateTrackedGeometry, UARTrackedGeometry*, TrackedGeometry);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnAddTrackedGeometry, UARTrackedGeometry*, TrackedGeometry);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnAddTrackedObject, UARTrackedObject*, TrackedObject);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnRemoveTrackedGeometry, UARTrackedGeometry*, TrackedGeometry);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnUpdateTrackedPlane, UARPlaneGeometry*, TrackedPlane);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnAddTrackedPlane, UARPlaneGeometry*, TrackedPlane);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnRemoveTrackedPlane, UARPlaneGeometry*, TrackedPlane);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnUpdateTrackedPoint, UARTrackedPoint*, TrackedPoint);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnAddTrackedPoint, UARTrackedPoint*, TrackedPoint);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnRemoveTrackedPoint, UARTrackedPoint*, TrackedPoint);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnAddTrackedImage, UARTrackedImage*, TrackedImage);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnUpdateTrackedEnvProbe, UAREnvironmentCaptureProbe*, TrackedEnvProbe);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnUpdateTrackedImage, UARTrackedImage*, TrackedImage);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnRemoveTrackedImage, UARTrackedImage*, TrackedImage);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnAddTrackedFace, UARFaceGeometry*, TrackedFace);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnUpdateTrackedFace, UARFaceGeometry*, TrackedFace);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnRemoveTrackedFace, UARFaceGeometry*, TrackedFace);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnAddTrackedEnvProbe, UAREnvironmentCaptureProbe*, TrackedEnvProbe);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnRemoveTrackedEnvProbe, UAREnvironmentCaptureProbe*, TrackedEnvProbe);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnUpdateTrackedObject, UARTrackedObject*, TrackedObject);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARTrackableNotifyComponentOnRemoveTrackedObject, UARTrackedObject*, TrackedObject);

UCLASS()
class AUGMENTEDREALITY_API UARTrackableNotifyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnAddTrackedGeometry OnAddTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnUpdateTrackedGeometry OnUpdateTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnRemoveTrackedGeometry OnRemoveTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnAddTrackedPlane OnAddTrackedPlane;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnUpdateTrackedPlane OnUpdateTrackedPlane;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnRemoveTrackedPlane OnRemoveTrackedPlane;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnAddTrackedPoint OnAddTrackedPoint;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnUpdateTrackedPoint OnUpdateTrackedPoint;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnRemoveTrackedPoint OnRemoveTrackedPoint;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnAddTrackedImage OnAddTrackedImage;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnUpdateTrackedImage OnUpdateTrackedImage;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnRemoveTrackedImage OnRemoveTrackedImage;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnAddTrackedFace OnAddTrackedFace;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnUpdateTrackedFace OnUpdateTrackedFace;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnRemoveTrackedFace OnRemoveTrackedFace;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnAddTrackedEnvProbe OnAddTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnUpdateTrackedEnvProbe OnUpdateTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnRemoveTrackedEnvProbe OnRemoveTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnAddTrackedObject OnAddTrackedObject;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnUpdateTrackedObject OnUpdateTrackedObject;
    
    UPROPERTY(BlueprintAssignable)
    FARTrackableNotifyComponentOnRemoveTrackedObject OnRemoveTrackedObject;
    
    UARTrackableNotifyComponent();
};

