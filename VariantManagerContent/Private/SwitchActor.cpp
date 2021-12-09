#include "SwitchActor.h"

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
    this->LastSelectedOption = 0;
}

