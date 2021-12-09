#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "AvoidCeilingComponent.generated.h"

class USceneComponent;

UCLASS()
class UAvoidCeilingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxDuckDistance;
    
    UPROPERTY(EditAnywhere)
    float TraceVerticalStart;
    
    UPROPERTY(EditAnywhere)
    float MinVerticalSpace;
    
    UPROPERTY(EditAnywhere)
    float DuckSpeed;
    
    UPROPERTY(Export, Transient)
    USceneComponent* ComponentToMove;
    
    UPROPERTY(EditAnywhere)
    bool IsDuckingEnabled;
    
public:
    UAvoidCeilingComponent();
};

