#pragma once
#include "CoreMinimal.h"
#include "SteamVRInputOriginInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESteamVRInputStringBits.h"
#include "SteamVRFingerSplays.h"
#include "SteamVRAction.h"
#include "SteamVRActionSet.h"
#include "ESteamVRHand.h"
#include "SteamVRInputBindingInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "SteamVRSkeletonTransform.h"
#include "EHand.h"
#include "SteamVRFingerCurls.h"
#include "ESkeletalSummaryDataType.h"
#include "EControllerFidelity.h"
#include "SteamVRInputDeviceFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class STEAMVRINPUTDEVICE_API USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamVRInputDeviceFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void ShowSteamVR_ActionOrigin(FSteamVRAction SteamVRAction, FSteamVRActionSet SteamVRActionSet);
    
    UFUNCTION(BlueprintCallable)
    static void ShowAllSteamVR_ActionOrigins();
    
    UFUNCTION(BlueprintCallable)
    static float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetPoseSource(bool bUseSkeletonPose);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetSeatedPosition();
    
    UFUNCTION(BlueprintCallable)
    static void PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
    
    UFUNCTION(BlueprintCallable)
    static float GetUserIPD();
    
    UFUNCTION(BlueprintCallable)
    static bool GetSteamVR_OriginTrackedDeviceInfo(FSteamVRAction SteamVRAction, FSteamVRInputOriginInfo& InputOriginInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GetSteamVR_OriginLocalizedName(FSteamVRAction SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, FString& OriginLocalizedName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(FSteamVRAction SteamVRActionHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSteamVR_HandPoseRelativeToNow(FVector& Position, FRotator& Orientation, ESteamVRHand hand, float PredictedSecondsFromNow);
    
    UFUNCTION(BlueprintCallable)
    static float GetSteamVR_GlobalPredictedSecondsFromNow();
    
    UFUNCTION(BlueprintCallable)
    static void GetSteamVR_ActionSetArray(TArray<FSteamVRActionSet>& SteamVRActionSets);
    
    UFUNCTION(BlueprintCallable)
    static void GetSteamVR_ActionArray(TArray<FSteamVRAction>& SteamVRActions);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkeletalTransform(FSteamVRSkeletonTransform& LeftHand, FSteamVRSkeletonTransform& RightHand, bool bWithController);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkeletalState(bool& LeftHandState, bool& RightHandState);
    
    UFUNCTION(BlueprintCallable)
    static void GetRightHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void GetPoseSource(bool& bUsingSkeletonPose);
    
    UFUNCTION(BlueprintCallable)
    static void GetLeftHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void GetFingerCurlsAndSplays(EHand hand, FSteamVRFingerCurls& FingerCurls, FSteamVRFingerSplays& FingerSplays, ESkeletalSummaryDataType SummaryDataType);
    
    UFUNCTION(BlueprintCallable)
    static void GetCurlsAndSplaysState(bool& LeftHandState, bool& RightHandState);
    
    UFUNCTION(BlueprintCallable)
    static void GetControllerFidelity(EControllerFidelity& LeftControllerFidelity, EControllerFidelity& RightControllerFidelity);
    
    UFUNCTION(BlueprintCallable)
    static void FindSteamVR_OriginTrackedDeviceInfo(FName ActionName, bool& bResult, FSteamVRInputOriginInfo& InputOriginInfo, FName ActionSet);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(FName ActionName, FName ActionSet);
    
    UFUNCTION(BlueprintCallable)
    static bool FindSteamVR_ActionOrigin(FName ActionName, FName ActionSet);
    
    UFUNCTION(BlueprintCallable)
    static void FindSteamVR_Action(FName ActionName, bool& bResult, FSteamVRAction& FoundAction, FSteamVRActionSet& FoundActionSet, FName ActionSet);
    
};

