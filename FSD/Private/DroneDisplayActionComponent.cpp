#include "DroneDisplayActionComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent

void UDroneDisplayActionComponent::SetMode(EDroneActions droneAction) {
}

UDroneDisplayActionComponent::UDroneDisplayActionComponent() {
    this->DisplayText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
}

