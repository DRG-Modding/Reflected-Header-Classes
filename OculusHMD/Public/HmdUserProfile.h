#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "HmdUserProfileField.h"
#include "HmdUserProfile.generated.h"

USTRUCT(BlueprintType)
struct FHmdUserProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Gender;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PlayerHeight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float EyeHeight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float IPD;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector2D NeckToEyeDistance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FHmdUserProfileField> ExtraFields;
    
    OCULUSHMD_API FHmdUserProfile();
};

