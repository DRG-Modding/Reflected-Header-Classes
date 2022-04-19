#pragma once
#include "CoreMinimal.h"
#include "EPhysicsType.generated.h"

UENUM()
enum EPhysicsType {
    PhysType_Default,
    PhysType_Kinematic,
    PhysType_Simulated,
    PhysType_MAX UMETA(Hidden),
};

