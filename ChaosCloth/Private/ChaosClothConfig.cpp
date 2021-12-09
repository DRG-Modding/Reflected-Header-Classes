#include "ChaosClothConfig.h"

UChaosClothConfig::UChaosClothConfig() {
    this->MassMode = EClothMassMode::Density;
    this->UniformMass = 0.00f;
    this->TotalMass = 0.50f;
    this->Density = 0.35f;
    this->MinPerParticleMass = 0.00f;
    this->EdgeStiffness = 1.00f;
    this->BendingStiffness = 1.00f;
    this->AreaStiffness = 1.00f;
    this->VolumeStiffness = 0.00f;
    this->StrainLimitingStiffness = 0.50f;
    this->LimitScale = 1.00f;
    this->bUseGeodesicDistance = true;
    this->ShapeTargetStiffness = 0.00f;
    this->CollisionThickness = 1.00f;
    this->FrictionCoefficient = 0.20f;
    this->DampingCoefficient = 0.01f;
    this->DragCoefficient = 0.10f;
    this->AnimDriveSpringStiffness = 0.00f;
    this->bUseBendingElements = false;
    this->bUseTetrahedralConstraints = false;
    this->bUseThinShellVolumeConstraints = false;
    this->bUseSelfCollisions = false;
    this->bUseContinuousCollisionDetection = false;
    this->AngularVelocityScale = 0.75f;
}

