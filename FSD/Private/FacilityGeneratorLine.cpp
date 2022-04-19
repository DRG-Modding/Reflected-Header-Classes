#include "FacilityGeneratorLine.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "SplineDecoratorComponent.h"

void AFacilityGeneratorLine::SetConnected(bool InConnected) {
}


void AFacilityGeneratorLine::OnRep_Path() {
}

void AFacilityGeneratorLine::OnRep_Connected() {
}

void AFacilityGeneratorLine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityGeneratorLine, ReplicatedPath);
    DOREPLIFETIME(AFacilityGeneratorLine, Connected);
}

AFacilityGeneratorLine::AFacilityGeneratorLine() {
    this->HeightOffsetMin = -100.00f;
    this->HeightOffsetMax = 100.00f;
    this->MaxSegmentLength = 1000.00f;
    this->CarveRadius = 50.00f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineDecorator = CreateDefaultSubobject<USplineDecoratorComponent>(TEXT("SplineDecorator"));
    this->Station = NULL;
    this->MeshInstance = NULL;
    this->Connected = true;
}

