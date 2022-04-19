#include "SwitchActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class AActor;

void ASwitchActor::SelectOption(int32 OptionIndex) {
}

int32 ASwitchActor::GetSelectedOption() const {
    return 0;
}

TArray<AActor*> ASwitchActor::GetOptions() const {
    return TArray<AActor*>();
}

ASwitchActor::ASwitchActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->LastSelectedOption = 0;
}

