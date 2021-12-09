#pragma once
#include "CoreMinimal.h"
#include "FilterOptionPerAxis.h"
#include "ConstraintDescription.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FConstraintDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilterOptionPerAxis TranslationAxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilterOptionPerAxis RotationAxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilterOptionPerAxis ScaleAxes;
    
    FConstraintDescription();
};

