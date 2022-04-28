#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DatasmithObjectTemplate.generated.h"

UCLASS(Abstract, Blueprintable)
class DATASMITHCONTENT_API UDatasmithObjectTemplate : public UObject {
    GENERATED_BODY()
public:
    UDatasmithObjectTemplate();
};

