#include "OculusInputFunctionLibrary.h"

class USkinnedMeshComponent;
class USkeletalMesh;

bool UOculusInputFunctionLibrary::IsPointerPoseValid(const EOculusHandType DeviceHand, const int32 ControllerIndex) {
    return false;
}

bool UOculusInputFunctionLibrary::IsHandTrackingEnabled() {
    return false;
}

TArray<FOculusCapsuleCollider> UOculusInputFunctionLibrary::InitializeHandPhysics(EOculusHandType SkeletonType, USkinnedMeshComponent* HandComponent, const float WorldToMeters) {
    return TArray<FOculusCapsuleCollider>();
}

ETrackingConfidence UOculusInputFunctionLibrary::GetTrackingConfidence(const EOculusHandType DeviceHand, const int32 ControllerIndex) {
    return ETrackingConfidence::Low;
}

FTransform UOculusInputFunctionLibrary::GetPointerPose(const EOculusHandType DeviceHand, const int32 ControllerIndex) {
    return FTransform{};
}

bool UOculusInputFunctionLibrary::GetHandSkeletalMesh(USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, const float WorldToMeters) {
    return false;
}

float UOculusInputFunctionLibrary::GetHandScale(const EOculusHandType DeviceHand, const int32 ControllerIndex) {
    return 0.0f;
}

EOculusHandType UOculusInputFunctionLibrary::GetDominantHand(const int32 ControllerIndex) {
    return EOculusHandType::None;
}

FQuat UOculusInputFunctionLibrary::GetBoneRotation(const EOculusHandType DeviceHand, const EBone BoneId, const int32 ControllerIndex) {
    return FQuat{};
}

FString UOculusInputFunctionLibrary::GetBoneName(EBone BoneId) {
    return TEXT("");
}

UOculusInputFunctionLibrary::UOculusInputFunctionLibrary() {
}

