#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshComponent
#include "InteractiveFoliageComponent.generated.h"

UCLASS(EditInlineNew)
class UInteractiveFoliageComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UInteractiveFoliageComponent();
};

