#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DatasmithCustomActionBase.generated.h"

UCLASS(Abstract)
class DATASMITHCONTENT_API UDatasmithCustomActionBase : public UObject {
    GENERATED_BODY()
public:
    UDatasmithCustomActionBase();
};

