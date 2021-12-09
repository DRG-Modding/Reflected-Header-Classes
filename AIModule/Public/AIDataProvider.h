#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AIDataProvider.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class AIMODULE_API UAIDataProvider : public UObject {
    GENERATED_BODY()
public:
    UAIDataProvider();
};

