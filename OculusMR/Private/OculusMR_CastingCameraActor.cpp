#include "OculusMR_CastingCameraActor.h"

AOculusMR_CastingCameraActor::AOculusMR_CastingCameraActor() {
    this->CameraColorTexture = NULL;
    this->CameraDepthTexture = NULL;
    this->ChromaKeyMaterialInstance = NULL;
    this->ChromaKeyLitMaterialInstance = NULL;
    this->CameraFrameMaterialInstance = NULL;
    this->BackdropMaterialInstance = NULL;
    this->BoundaryActor = NULL;
    this->BoundarySceneCaptureActor = NULL;
    this->BackgroundRenderTargets.AddDefaulted(1);
    this->ForegroundCaptureActor = NULL;
    this->ForegroundRenderTargets.AddDefaulted(1);
    this->MRSettings = NULL;
    this->MRState = NULL;
}

