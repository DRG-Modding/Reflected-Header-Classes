#include "OculusHandComponent.h"

UOculusHandComponent::UOculusHandComponent() {
    this->SkeletonType = EOculusHandType::None;
    this->MeshType = EOculusHandType::None;
    this->ConfidenceBehavior = EConfidenceBehavior::HideActor;
    this->SystemGestureBehavior = ESystemGestureBehavior::SwapMaterial;
    this->SystemGestureMaterial = NULL;
    this->bInitializePhysics = false;
    this->bUpdateHandScale = false;
    this->MaterialOverride = NULL;
    this->bSkeletalMeshInitialized = false;
}

