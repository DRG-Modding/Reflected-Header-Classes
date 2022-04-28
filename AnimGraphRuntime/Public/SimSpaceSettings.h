#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SimSpaceSettings.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FSimSpaceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MasterAlpha;
    
    UPROPERTY(EditAnywhere)
    float VelocityScaleZ;
    
    UPROPERTY(EditAnywhere)
    float MaxLinearVelocity;
    
    UPROPERTY(EditAnywhere)
    float MaxAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float MaxLinearAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MaxAngularAcceleration;
    
    UPROPERTY(EditAnywhere)
    float ExternalLinearDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExternalLinearDragV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExternalLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExternalAngularVelocity;
    
    FSimSpaceSettings();
};

