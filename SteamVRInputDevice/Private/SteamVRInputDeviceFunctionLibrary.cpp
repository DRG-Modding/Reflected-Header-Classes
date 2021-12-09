#include "SteamVRInputDeviceFunctionLibrary.h"

void USteamVRInputDeviceFunctionLibrary::ShowSteamVR_ActionOrigin(FSteamVRAction SteamVRAction, FSteamVRActionSet SteamVRActionSet) {
}

void USteamVRInputDeviceFunctionLibrary::ShowAllSteamVR_ActionOrigins() {
}

float USteamVRInputDeviceFunctionLibrary::SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue) {
    return 0.0f;
}

void USteamVRInputDeviceFunctionLibrary::SetPoseSource(bool bUseSkeletonPose) {
}

void USteamVRInputDeviceFunctionLibrary::SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState) {
}

bool USteamVRInputDeviceFunctionLibrary::ResetSeatedPosition() {
    return false;
}

void USteamVRInputDeviceFunctionLibrary::PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude) {
}

float USteamVRInputDeviceFunctionLibrary::GetUserIPD() {
    return 0.0f;
}

bool USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginTrackedDeviceInfo(FSteamVRAction SteamVRAction, FSteamVRInputOriginInfo& InputOriginInfo) {
    return false;
}

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginLocalizedName(FSteamVRAction SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, FString& OriginLocalizedName) {
}

TArray<FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::GetSteamVR_InputBindingInfo(FSteamVRAction SteamVRActionHandle) {
    return TArray<FSteamVRInputBindingInfo>();
}

bool USteamVRInputDeviceFunctionLibrary::GetSteamVR_HandPoseRelativeToNow(FVector& Position, FRotator& Orientation, ESteamVRHand hand, float PredictedSecondsFromNow) {
    return false;
}

float USteamVRInputDeviceFunctionLibrary::GetSteamVR_GlobalPredictedSecondsFromNow() {
    return 0.0f;
}

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionSetArray(TArray<FSteamVRActionSet>& SteamVRActionSets) {
}

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionArray(TArray<FSteamVRAction>& SteamVRActions) {
}

void USteamVRInputDeviceFunctionLibrary::GetSkeletalTransform(FSteamVRSkeletonTransform& LeftHand, FSteamVRSkeletonTransform& RightHand, bool bWithController) {
}

void USteamVRInputDeviceFunctionLibrary::GetSkeletalState(bool& LeftHandState, bool& RightHandState) {
}

void USteamVRInputDeviceFunctionLibrary::GetRightHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity) {
}

void USteamVRInputDeviceFunctionLibrary::GetPoseSource(bool& bUsingSkeletonPose) {
}

void USteamVRInputDeviceFunctionLibrary::GetLeftHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity) {
}

void USteamVRInputDeviceFunctionLibrary::GetFingerCurlsAndSplays(EHand hand, FSteamVRFingerCurls& FingerCurls, FSteamVRFingerSplays& FingerSplays, ESkeletalSummaryDataType SummaryDataType) {
}

void USteamVRInputDeviceFunctionLibrary::GetCurlsAndSplaysState(bool& LeftHandState, bool& RightHandState) {
}

void USteamVRInputDeviceFunctionLibrary::GetControllerFidelity(EControllerFidelity& LeftControllerFidelity, EControllerFidelity& RightControllerFidelity) {
}

void USteamVRInputDeviceFunctionLibrary::FindSteamVR_OriginTrackedDeviceInfo(FName ActionName, bool& bResult, FSteamVRInputOriginInfo& InputOriginInfo, FName ActionSet) {
}

TArray<FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::FindSteamVR_InputBindingInfo(FName ActionName, FName ActionSet) {
    return TArray<FSteamVRInputBindingInfo>();
}

bool USteamVRInputDeviceFunctionLibrary::FindSteamVR_ActionOrigin(FName ActionName, FName ActionSet) {
    return false;
}

void USteamVRInputDeviceFunctionLibrary::FindSteamVR_Action(FName ActionName, bool& bResult, FSteamVRAction& FoundAction, FSteamVRActionSet& FoundActionSet, FName ActionSet) {
}

USteamVRInputDeviceFunctionLibrary::USteamVRInputDeviceFunctionLibrary() {
}

