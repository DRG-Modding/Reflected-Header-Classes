#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EditableMeshAdapter.generated.h"

UCLASS(Abstract)
class EDITABLEMESH_API UEditableMeshAdapter : public UObject {
    GENERATED_BODY()
public:
    UEditableMeshAdapter();
};

