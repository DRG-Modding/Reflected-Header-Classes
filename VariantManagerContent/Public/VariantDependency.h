#pragma once
#include "CoreMinimal.h"
#include "VariantDependency.generated.h"

class UVariantSet;
class UVariant;

USTRUCT(BlueprintType)
struct VARIANTMANAGERCONTENT_API FVariantDependency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVariantSet> VariantSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVariant> Variant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FVariantDependency();
};

