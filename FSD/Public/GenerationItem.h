#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "GenerationItem.generated.h"

UCLASS(Abstract)
class AGenerationItem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool Visible;
    
    UPROPERTY(EditAnywhere)
    bool AddToLevel;
    
public:
    AGenerationItem();
};

