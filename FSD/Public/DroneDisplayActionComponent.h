#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EDroneActions.h"
#include "DroneDisplayActionComponent.generated.h"

class UTextRenderComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UDroneDisplayActionComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* DisplayText;
    
public:
    UDroneDisplayActionComponent();
    UFUNCTION(BlueprintCallable)
    void SetMode(EDroneActions droneAction);
    
};

