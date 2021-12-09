#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: OculusHMD ETrackedDeviceType
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TrackedCamera.generated.h"

USTRUCT(BlueprintType)
struct FTrackedCamera {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    float FieldOfView;
    
    UPROPERTY()
    int32 SizeX;
    
    UPROPERTY()
    int32 SizeY;
    
    UPROPERTY()
    ETrackedDeviceType AttachedTrackedDevice;
    
    UPROPERTY()
    FRotator CalibratedRotation;
    
    UPROPERTY()
    FVector CalibratedOffset;
    
    UPROPERTY()
    FRotator UserRotation;
    
    UPROPERTY()
    FVector UserOffset;
    
    UPROPERTY()
    FRotator RawRotation;
    
    UPROPERTY()
    FVector RawOffset;
    
    OCULUSMR_API FTrackedCamera();
};

