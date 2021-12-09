#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "IconGenerationBase.generated.h"

class USceneCaptureComponent2D;
class UMaterialInterface;

UCLASS()
class AIconGenerationBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    USceneCaptureComponent2D* ActiveCaptureComponent;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DownScaleMaterial;
    
public:
    AIconGenerationBase();
};

