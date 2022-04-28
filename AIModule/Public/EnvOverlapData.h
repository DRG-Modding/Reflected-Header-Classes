#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EEnvOverlapShape.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "EnvOverlapData.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvOverlapData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ExtentX;
    
    UPROPERTY(EditAnywhere)
    float ExtentY;
    
    UPROPERTY(EditAnywhere)
    float ExtentZ;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShapeOffset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvOverlapShape::Type> OverlapShape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyBlockingHits: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverlapComplex: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipOverlapQuerier: 1;
    
    FEnvOverlapData();
};

