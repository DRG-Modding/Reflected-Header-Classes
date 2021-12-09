#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "HmdUserProfileField.h"
#include "HmdUserProfile.generated.h"

USTRUCT(BlueprintType)
struct FHmdUserProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite)
    FString Gender;
    
    UPROPERTY(BlueprintReadWrite)
    float PlayerHeight;
    
    UPROPERTY(BlueprintReadWrite)
    float EyeHeight;
    
    UPROPERTY(BlueprintReadWrite)
    float IPD;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D NeckToEyeDistance;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FHmdUserProfileField> ExtraFields;
    
    OCULUSHMD_API FHmdUserProfile();
};

