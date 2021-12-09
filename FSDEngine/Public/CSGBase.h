#pragma once
#include "CoreMinimal.h"
#include "BuilderBase.h"
#include "MeshBaseProperties.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "CSGBase.generated.h"

UCLASS(Abstract)
class UCSGBase : public UBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMeshBaseProperties BaseProperties;
    
    UPROPERTY()
    FTransform RelativeTransform;
    
    UCSGBase();
};

