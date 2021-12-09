#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "EDroneActions.h"
#include "DroneDisplayActionComponent.generated.h"

class UTextRenderComponent;

UCLASS(BlueprintType)
class UDroneDisplayActionComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UTextRenderComponent* DisplayText;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMode(EDroneActions droneAction);
    
    UDroneDisplayActionComponent();
};

