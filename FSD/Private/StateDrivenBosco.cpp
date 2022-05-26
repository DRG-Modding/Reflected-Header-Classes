#include "StateDrivenBosco.h"
#include "DroneCombatState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "DroneReviveState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "DroneFollowState.h"
#include "DroneMiningState.h"

AStateDrivenBosco::AStateDrivenBosco() {
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->ThrusterSound = CreateDefaultSubobject<UAudioComponent>(TEXT("ThrusterSound"));
    this->L_ThrusterParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("L_ThrusterParticles"));
    this->R_ThrusterParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("R_ThrusterParticles"));
    this->FollowState = CreateDefaultSubobject<UDroneFollowState>(TEXT("FollowState"));
    this->CombatState = CreateDefaultSubobject<UDroneCombatState>(TEXT("CombatState"));
    this->MiningState = CreateDefaultSubobject<UDroneMiningState>(TEXT("MiningState"));
    this->ReviveState = CreateDefaultSubobject<UDroneReviveState>(TEXT("ReviveState"));
}

