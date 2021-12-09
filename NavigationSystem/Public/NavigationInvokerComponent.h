#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "NavigationInvokerComponent.generated.h"

UCLASS()
class NAVIGATIONSYSTEM_API UNavigationInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float TileGenerationRadius;
    
    UPROPERTY(EditAnywhere)
    float TileRemovalRadius;
    
public:
    UNavigationInvokerComponent();
};

