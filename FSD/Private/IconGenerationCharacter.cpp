#include "IconGenerationCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AIconGenerationCharacter::AIconGenerationCharacter() {
    this->OrigBaseMaterial = NULL;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->HairColor = NULL;
    this->ArmorMaterial = NULL;
}

