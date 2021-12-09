#pragma once
#include "CoreMinimal.h"
#include "EARDepthQuality.h"
#include "ARTexture.h"
#include "EARDepthAccuracy.h"
#include "ARTextureCameraDepth.generated.h"

UCLASS(Abstract)
class AUGMENTEDREALITY_API UARTextureCameraDepth : public UARTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EARDepthQuality DepthQuality;
    
    UPROPERTY(BlueprintReadOnly)
    EARDepthAccuracy DepthAccuracy;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTemporallySmoothed;
    
    UARTextureCameraDepth();
};

