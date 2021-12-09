#pragma once
#include "CoreMinimal.h"
#include "LandscapeEditToolRenderData.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT()
struct FLandscapeEditToolRenderData {
    GENERATED_BODY()
public:
    UPROPERTY(NonTransactional)
    UMaterialInterface* ToolMaterial;
    
    UPROPERTY(NonTransactional)
    UMaterialInterface* GizmoMaterial;
    
    UPROPERTY(NonTransactional)
    int32 SelectedType;
    
    UPROPERTY(NonTransactional)
    int32 DebugChannelR;
    
    UPROPERTY(NonTransactional)
    int32 DebugChannelG;
    
    UPROPERTY(NonTransactional)
    int32 DebugChannelB;
    
    UPROPERTY(NonTransactional)
    UTexture2D* DataTexture;
    
    UPROPERTY(NonTransactional)
    UTexture2D* LayerContributionTexture;
    
    UPROPERTY(NonTransactional)
    UTexture2D* DirtyTexture;
    
    LANDSCAPE_API FLandscapeEditToolRenderData();
};

