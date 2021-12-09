#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshComponent
#include "ControlPointMeshComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UControlPointMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    float VirtualTextureMainPassMaxDrawDistance;
    
    UControlPointMeshComponent();
};

