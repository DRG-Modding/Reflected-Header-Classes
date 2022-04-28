#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EARTextureType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureCube -FallbackName=TextureCube
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "AREnvironmentCaptureProbeTexture.generated.h"

UCLASS(Abstract, Blueprintable)
class AUGMENTEDREALITY_API UAREnvironmentCaptureProbeTexture : public UTextureCube {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARTextureType TextureType;
    
    UPROPERTY(EditAnywhere)
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ExternalTextureGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UAREnvironmentCaptureProbeTexture();
};

