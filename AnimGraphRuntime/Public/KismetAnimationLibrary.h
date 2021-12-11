#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
//CROSS-MODULE INCLUDE: Engine ERelativeTransformSpace
#include "PositionHistory.h"
#include "EEasingFuncType.h"
#include "KismetAnimationLibrary.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType)
class ANIMGRAPHRUNTIME_API UKismetAnimationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void K2_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    
    UFUNCTION(BlueprintCallable)
    static void K2_StartProfilingTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform K2_LookAt(const FTransform& CurrentTransform, const FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector upVector, float ClampConeInDegree);
    
    UFUNCTION(BlueprintCallable)
    static float K2_EndProfilingTimer(bool bLog, const FString& LogPrefix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_DistanceBetweenTwoSocketsAndMapRange(const USkeletalMeshComponent* Component, const FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector K2_DirectionBetweenSockets(const USkeletalMeshComponent* Component, const FName SocketOrBoneNameFrom, const FName SocketOrBoneNameTo);
    
    UFUNCTION(BlueprintCallable)
    static float K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent* Component, const FName SocketOrBoneName, const FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, UPARAM(Ref) FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const FRuntimeFloatCurve& CustomCurve);
    
    UFUNCTION(BlueprintCallable)
    static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, UPARAM(Ref) FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
    
    UKismetAnimationLibrary();
};

