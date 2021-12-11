#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TextureCube
#include "EARTextureType.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "AREnvironmentCaptureProbeTexture.generated.h"

UCLASS(Abstract)
class AUGMENTEDREALITY_API UAREnvironmentCaptureProbeTexture : public UTextureCube {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EARTextureType TextureType;
    
    UPROPERTY(BlueprintReadOnly)
    float Timestamp;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ExternalTextureGuid;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D Size;
    
    UAREnvironmentCaptureProbeTexture();
};

