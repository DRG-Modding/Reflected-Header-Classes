#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "DatasmithCustomActionBase.generated.h"

UCLASS(Abstract)
class DATASMITHCONTENT_API UDatasmithCustomActionBase : public UObject {
    GENERATED_BODY()
public:
    UDatasmithCustomActionBase();
};

