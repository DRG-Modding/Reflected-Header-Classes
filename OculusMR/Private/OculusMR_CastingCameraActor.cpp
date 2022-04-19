#include "OculusMR_CastingCameraActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=VRNotificationsComponent -FallbackName=VRNotificationsComponent
#include "OculusMR_PlaneMeshComponent.h"

AOculusMR_CastingCameraActor::AOculusMR_CastingCameraActor() {
    this->VRNotificationComponent = CreateDefaultSubobject<UVRNotificationsComponent>(TEXT("VRNotificationComponent"));
    this->CameraColorTexture = NULL;
    this->CameraDepthTexture = NULL;
    this->PlaneMeshComponent = CreateDefaultSubobject<UOculusMR_PlaneMeshComponent>(TEXT("PlaneMeshComponent"));
    this->ChromaKeyMaterialInstance = NULL;
    this->CameraFrameMaterialInstance = NULL;
    this->BackdropMaterialInstance = NULL;
    this->BackgroundRenderTargets.AddDefaulted(1);
    this->ForegroundCaptureActor = NULL;
    this->ForegroundRenderTargets.AddDefaulted(1);
    this->MRSettings = NULL;
    this->MRState = NULL;
}

