#include "InfluenceTester.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AInfluenceTester::AInfluenceTester() {
    this->Influencer = NULL;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
}

