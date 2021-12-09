#include "ChaosSolverActor.h"

void AChaosSolverActor::SetSolverActive(bool bActive) {
}

void AChaosSolverActor::SetAsCurrentWorldSolver() {
}

AChaosSolverActor::AChaosSolverActor() {
    this->TimeStepMultiplier = 1.00f;
    this->CollisionIterations = 1;
    this->PushOutIterations = 3;
    this->PushOutPairIterations = 2;
    this->ClusterConnectionFactor = 1.00f;
    this->ClusterUnionConnectionType = EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation;
    this->DoGenerateCollisionData = true;
    this->DoGenerateBreakingData = true;
    this->DoGenerateTrailingData = true;
    this->bHasFloor = true;
    this->FloorHeight = 0.00f;
    this->MassScale = 1.00f;
    this->bGenerateContactGraph = true;
    this->SpriteComponent = NULL;
}

