#include "NavModifierVolume.h"
#include "Templates/SubclassOf.h"
#include "NavArea_Null.h"

class UNavArea;

void ANavModifierVolume::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}

ANavModifierVolume::ANavModifierVolume() {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bMaskFillCollisionUnderneathForNavmesh = false;
}

