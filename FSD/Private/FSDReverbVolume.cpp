#include "FSDReverbVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AFSDReverbVolume::AFSDReverbVolume() {
    this->Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->Reverb = NULL;
    this->Priority = 0.00f;
}

