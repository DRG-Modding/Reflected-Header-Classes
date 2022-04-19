#pragma once
#include "CoreMinimal.h"
#include "MeshSurfacePointTool.h"
#include "BrushStampData.h"
#include "BaseBrushTool.generated.h"

class UBrushStampIndicator;
class UBrushBaseProperties;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBaseBrushTool : public UMeshSurfacePointTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBrushBaseProperties* BrushProperties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInBrushStroke;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float WorldToLocalScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBrushStampData LastBrushStamp;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBrushBaseProperties> PropertyClass;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBrushStampIndicator* BrushStampIndicator;
    
public:
    UBaseBrushTool();
};

