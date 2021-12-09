#pragma once
#include "CoreMinimal.h"
#include "ETrackedDeviceType.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GuardianTestResult.generated.h"

USTRUCT(BlueprintType)
struct FGuardianTestResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsTriggering;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETrackedDeviceType DeviceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClosestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ClosestPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ClosestPointNormal;
    
    OCULUSHMD_API FGuardianTestResult();
};

