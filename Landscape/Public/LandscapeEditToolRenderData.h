#pragma once
#include "CoreMinimal.h"
#include "LandscapeEditToolRenderData.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT()
struct FLandscapeEditToolRenderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ToolMaterial;
    
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GizmoMaterial;
    
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 SelectedType;
    
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 DebugChannelR;
    
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 DebugChannelG;
    
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    int32 DebugChannelB;
    
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    UTexture2D* DataTexture;
    
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    UTexture2D* LayerContributionTexture;
    
    UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
    UTexture2D* DirtyTexture;
    
    LANDSCAPE_API FLandscapeEditToolRenderData();
};

