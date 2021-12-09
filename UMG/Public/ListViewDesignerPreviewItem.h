#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ListViewDesignerPreviewItem.generated.h"

UCLASS(Transient, Within=ListView)
class UListViewDesignerPreviewItem : public UObject {
    GENERATED_BODY()
public:
    UListViewDesignerPreviewItem();
};

