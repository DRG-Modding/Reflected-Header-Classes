#pragma once
#include "CoreMinimal.h"
#include "ECustomUsableType.h"
#include "CustomUsable.generated.h"

class UUsableComponentBase;

USTRUCT()
struct FCustomUsable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UUsableComponentBase* Usable;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ECustomUsableType TerminationType;
    
    FSD_API FCustomUsable();
};

