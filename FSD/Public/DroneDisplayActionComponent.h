#pragma once
#include "CoreMinimal.h"
#include "EDroneActions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "DroneDisplayActionComponent.generated.h"

class UTextRenderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
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

