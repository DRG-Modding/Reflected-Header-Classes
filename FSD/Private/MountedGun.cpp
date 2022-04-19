#include "MountedGun.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

void AMountedGun::Server_Test_Implementation() {
}
bool AMountedGun::Server_Test_Validate() {
    return true;
}

AMountedGun::AMountedGun() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->WeaponFire = NULL;
    this->GunLogic = NULL;
}

