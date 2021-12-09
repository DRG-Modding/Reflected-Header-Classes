#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "NavMeshRenderingComponent.generated.h"

UCLASS(EditInlineNew)
class NAVIGATIONSYSTEM_API UNavMeshRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UNavMeshRenderingComponent();
};

