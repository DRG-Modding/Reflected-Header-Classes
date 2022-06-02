#include "BasicThrowableItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "CarriableComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "InstantUsable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "FirstPersonStaticMeshComponent.h"

class AActor;
class APlayerCharacter;
class UPrimitiveComponent;

void ABasicThrowableItem::ThrowItem(const FVector& throwForce) {
}

void ABasicThrowableItem::ResetImpactSound() {
}

void ABasicThrowableItem::OnUsed(APlayerCharacter* User, EInputKeys Key) {
}

void ABasicThrowableItem::OnUsableChanged(bool CanUse) {
}

void ABasicThrowableItem::OnPickedUp() {
}

void ABasicThrowableItem::OnDropped() {
}

void ABasicThrowableItem::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

ABasicThrowableItem::ABasicThrowableItem() {
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->UseSphere = CreateDefaultSubobject<USphereComponent>(TEXT("UseSphere"));
    this->CarriableComp = CreateDefaultSubobject<UCarriableComponent>(TEXT("Carriable"));
    this->UsableComp = CreateDefaultSubobject<UInstantUsable>(TEXT("Usable"));
    this->WorldMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThirdpersonMesh"));
    this->ViewMeshComp = CreateDefaultSubobject<UFirstPersonStaticMeshComponent>(TEXT("FirstPersonMesh"));
    this->ImpactSound = NULL;
    this->SquaredMinImpactForce = 100.00f;
    this->ImpactAudioResetTime = 0.20f;
    this->SquaredMinThrowforce = 10.00f;
}

