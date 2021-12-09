#include "ModioPopupContainer.h"
#include "Templates/SubclassOf.h"

class UModioPopupBase;

UModioPopupBase* UModioPopupContainer::PushPopup_Implementation(TSubclassOf<UModioPopupBase> PopupClass) {
    return NULL;
}

UModioPopupBase* UModioPopupContainer::PopPopup(TSubclassOf<UModioPopupBase> PopupClass) {
    return NULL;
}

UModioPopupContainer::UModioPopupContainer() : UUserWidget(FObjectInitializer::Get()) {
}

