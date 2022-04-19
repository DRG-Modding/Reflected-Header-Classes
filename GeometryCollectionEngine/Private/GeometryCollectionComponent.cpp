#include "GeometryCollectionComponent.h"
#include "Net/UnrealNetwork.h"

class UFieldSystemMetaData;
class UFieldNodeBase;

void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks) {
}


void UGeometryCollectionComponent::OnRep_RepData(const FGeometryCollectionRepData& OldData) {
}

void UGeometryCollectionComponent::NetAbandonCluster_Implementation(int32 TransformIndex) {
}

void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
}

void UGeometryCollectionComponent::ApplyKinematicField(float Radius, FVector Position) {
}

void UGeometryCollectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGeometryCollectionComponent, RepData);
}

UGeometryCollectionComponent::UGeometryCollectionComponent() {
    this->ChaosSolverActor = NULL;
    this->RestCollection = NULL;
    this->Simulating = true;
    this->ObjectType = EObjectStateTypeEnum::Chaos_Object_Dynamic;
    this->EnableClustering = true;
    this->ClusterGroupIndex = 0;
    this->MaxClusterLevel = 100;
    this->DamageThreshold.AddDefaulted(1);
    this->ClusterConnectionType = EClusterConnectionTypeEnum::Chaos_PointImplicit;
    this->CollisionGroup = 0;
    this->CollisionSampleFraction = 1.00f;
    this->LinearEtherDrag = 0.00f;
    this->AngularEtherDrag = 0.00f;
    this->PhysicalMaterial = NULL;
    this->InitialVelocityType = EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined;
    this->PhysicalMaterialOverride = NULL;
    this->DesiredCacheTime = 0.00f;
    this->CachePlayback = false;
    this->bNotifyBreaks = false;
    this->bNotifyCollisions = false;
    this->bEnableReplication = false;
    this->bEnableAbandonAfterLevel = false;
    this->ReplicationAbandonClusterLevel = 0;
    this->DummyBodySetup = NULL;
}

