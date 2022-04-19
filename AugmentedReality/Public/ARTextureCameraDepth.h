#pragma once
#include "CoreMinimal.h"
#include "ARTexture.h"
#include "EARDepthQuality.h"
#include "EARDepthAccuracy.h"
#include "ARTextureCameraDepth.generated.h"

UCLASS(Abstract)
class AUGMENTEDREALITY_API UARTextureCameraDepth : public UARTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARDepthQuality DepthQuality;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARDepthAccuracy DepthAccuracy;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsTemporallySmoothed;
    
    UARTextureCameraDepth();
};

