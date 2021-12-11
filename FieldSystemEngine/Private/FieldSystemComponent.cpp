#include "FieldSystemComponent.h"

class UFieldNodeBase;
class UFieldSystemMetaData;

void UFieldSystemComponent::ResetFieldSystem() {
}

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude) {
}

void UFieldSystemComponent::ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32 Iterations) {
}

void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, FVector Position, float Radius) {
}

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude) {
}

void UFieldSystemComponent::ApplyRadialForce(bool Enabled, FVector Position, float Magnitude) {
}

void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
}

void UFieldSystemComponent::ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude) {
}

void UFieldSystemComponent::AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
}

UFieldSystemComponent::UFieldSystemComponent() {
    this->FieldSystem = NULL;
}

