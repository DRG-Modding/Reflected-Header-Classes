#include "ChaosClothSharedSimConfig.h"

UChaosClothSharedSimConfig::UChaosClothSharedSimConfig() {
    this->IterationCount = 2;
    this->SubdivisionCount = 1;
    this->SelfCollisionThickness = 2.00f;
    this->CollisionThickness = 1.00f;
    this->bUseDampingOverride = true;
    this->Damping = 0.01f;
    this->bUseGravityOverride = false;
    this->GravityScale = 1.00f;
    this->bUseLocalSpaceSimulation = true;
    this->bUseXPBDConstraints = false;
}

