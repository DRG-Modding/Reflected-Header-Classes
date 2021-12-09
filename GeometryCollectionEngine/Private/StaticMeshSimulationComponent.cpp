#include "StaticMeshSimulationComponent.h"


void UStaticMeshSimulationComponent::ForceRecreatePhysicsState() {
}

UStaticMeshSimulationComponent::UStaticMeshSimulationComponent() {
    this->Simulating = true;
    this->bNotifyCollisions = false;
    this->ObjectType = EObjectStateTypeEnum::Chaos_Object_Dynamic;
    this->Mass = 1.00f;
    this->CollisionType = ECollisionTypeEnum::Chaos_Surface_Volumetric;
    this->ImplicitType = EImplicitTypeEnum::Chaos_Max;
    this->MinLevelSetResolution = 5;
    this->MaxLevelSetResolution = 10;
    this->InitialVelocityType = EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined;
    this->DamageThreshold = 0.00f;
    this->PhysicalMaterial = NULL;
    this->ChaosSolverActor = NULL;
}

