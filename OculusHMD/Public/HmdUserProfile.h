#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "HmdUserProfileField.h"
#include "HmdUserProfile.generated.h"

USTRUCT(BlueprintType)
struct FHmdUserProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Gender;
    
    UPROPERTY(EditAnywhere)
    float PlayerHeight;
    
    UPROPERTY(EditAnywhere)
    float EyeHeight;
    
    UPROPERTY(EditAnywhere)
    float IPD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NeckToEyeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHmdUserProfileField> ExtraFields;
    
    OCULUSHMD_API FHmdUserProfile();
};

