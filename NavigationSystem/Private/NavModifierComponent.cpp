#include "NavModifierComponent.h"
#include "Templates/SubclassOf.h"
#include "NavArea_Null.h"

class UNavArea;

void UNavModifierComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}

UNavModifierComponent::UNavModifierComponent() {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bIncludeAgentHeight = true;
}

