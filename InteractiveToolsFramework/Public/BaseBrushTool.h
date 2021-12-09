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
    UPROPERTY()
    UBrushBaseProperties* BrushProperties;
    
    UPROPERTY()
    bool bInBrushStroke;
    
    UPROPERTY()
    FBrushStampData LastBrushStamp;
    
protected:
    UPROPERTY()
    TSoftClassPtr<UBrushBaseProperties> PropertyClass;
    
    UPROPERTY()
    UBrushStampIndicator* BrushStampIndicator;
    
public:
    UBaseBrushTool();
};

