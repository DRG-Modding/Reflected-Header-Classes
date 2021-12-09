#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: Engine Texture
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EARTextureType.h"
#include "ARTexture.generated.h"

UCLASS(Abstract)
class AUGMENTEDREALITY_API UARTexture : public UTexture {
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
    
    UARTexture();
};

