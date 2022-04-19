#include "OculusMR_Settings.h"

void UOculusMR_Settings::SetIsCasting(bool Val) {
}

void UOculusMR_Settings::SetCompositionMethod(EOculusMR_CompositionMethod Val) {
}

void UOculusMR_Settings::SetCapturingCamera(EOculusMR_CameraDeviceEnum Val) {
}

void UOculusMR_Settings::SaveToIni() const {
}

void UOculusMR_Settings::LoadFromIni() {
}

bool UOculusMR_Settings::GetIsCasting() {
    return false;
}

EOculusMR_CompositionMethod UOculusMR_Settings::GetCompositionMethod() {
    return EOculusMR_CompositionMethod::ExternalComposition;
}

EOculusMR_CameraDeviceEnum UOculusMR_Settings::GetCapturingCamera() {
    return EOculusMR_CameraDeviceEnum::CD_None;
}

int32 UOculusMR_Settings::GetBindToTrackedCameraIndex() {
    return 0;
}

void UOculusMR_Settings::BindToTrackedCameraIndexIfAvailable(int32 InTrackedCameraIndex) {
}

UOculusMR_Settings::UOculusMR_Settings() {
    this->ClippingReference = EOculusMR_ClippingReference::CR_Head;
    this->bUseTrackedCameraResolution = true;
    this->WidthPerView = 960;
    this->HeightPerView = 540;
    this->CastingLatency = 0.00f;
    this->HandPoseStateLatency = 0.00f;
    this->ChromaKeySimilarity = 0.60f;
    this->ChromaKeySmoothRange = 0.03f;
    this->ChromaKeySpillRange = 0.04f;
    this->ExternalCompositionPostProcessEffects = EOculusMR_PostProcessEffects::PPE_Off;
    this->bIsCasting = false;
    this->CompositionMethod = EOculusMR_CompositionMethod::ExternalComposition;
    this->CapturingCamera = EOculusMR_CameraDeviceEnum::CD_WebCamera0;
}

