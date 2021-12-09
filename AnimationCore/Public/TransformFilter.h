#pragma once
#include "CoreMinimal.h"
#include "FilterOptionPerAxis.h"
#include "TransformFilter.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FTransformFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilterOptionPerAxis TranslationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilterOptionPerAxis RotationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilterOptionPerAxis ScaleFilter;
    
    FTransformFilter();
};

