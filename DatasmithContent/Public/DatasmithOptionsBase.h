#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DatasmithOptionsBase.generated.h"

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithOptionsBase : public UObject {
    GENERATED_BODY()
public:
    UDatasmithOptionsBase();
};

