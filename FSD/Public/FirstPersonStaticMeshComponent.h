#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshComponent
#include "FirstPersonStaticMeshComponent.generated.h"

UCLASS(EditInlineNew)
class UFirstPersonStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnabledFPFOV;
    
public:
    UFirstPersonStaticMeshComponent();
};

