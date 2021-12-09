#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "DatasmithObjectTemplate.generated.h"

UCLASS(Abstract)
class DATASMITHCONTENT_API UDatasmithObjectTemplate : public UObject {
    GENERATED_BODY()
public:
    UDatasmithObjectTemplate();
};

