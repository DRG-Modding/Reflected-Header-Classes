#pragma once
#include "CoreMinimal.h"
#include "TemplateSequenceBindingOverrideData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FTemplateSequenceBindingOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridesDefault;
    
    TEMPLATESEQUENCE_API FTemplateSequenceBindingOverrideData();
};

