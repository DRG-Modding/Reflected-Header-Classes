#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SDFRandomizeTransformProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFRandomizeTransformProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Translation;
    
    UPROPERTY(EditAnywhere)
    float RotationMinZ;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxZ;
    
    UPROPERTY(EditAnywhere)
    float RotationMinY;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxY;
    
    UPROPERTY(EditAnywhere)
    float RotationMinX;
    
    UPROPERTY(EditAnywhere)
    float RotationMaxX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleAxesIndependent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableRandomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSDENGINE_API FSDFRandomizeTransformProperties();
};

