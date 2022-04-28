#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ETrackingConfidence.h"
#include "EOculusHandType.h"
#include "OculusCapsuleCollider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "EBone.h"
#include "OculusInputFunctionLibrary.generated.h"

class USkinnedMeshComponent;
class USkeletalMesh;

UCLASS(Blueprintable)
class OCULUSINPUT_API UOculusInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOculusInputFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointerPoseValid(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHandTrackingEnabled();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, USkinnedMeshComponent* HandComponent, const float WorldToMeters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETrackingConfidence GetTrackingConfidence(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetPointerPose(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandSkeletalMesh(USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, const float WorldToMeters);
    
    UFUNCTION(BlueprintPure)
    static float GetHandScale(const EOculusHandType DeviceHand, const int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EOculusHandType GetDominantHand(const int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat GetBoneRotation(const EOculusHandType DeviceHand, const EBone BoneId, const int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBoneName(EBone BoneId);
    
};

