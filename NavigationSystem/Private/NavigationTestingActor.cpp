#include "NavigationTestingActor.h"

ANavigationTestingActor::ANavigationTestingActor() {
    this->bActAsNavigationInvoker = false;
    this->MyNavData = NULL;
    this->bProjectedLocationValid = false;
    this->bSearchStart = false;
    this->CostLimitFactor = 340282346638528859811704183484516925440.00f;
    this->MinimumCostLimit = 0.00f;
    this->bBacktracking = false;
    this->bUseHierarchicalPathfinding = false;
    this->bGatherDetailedInfo = true;
    this->bDrawDistanceToWall = false;
    this->bShowNodePool = true;
    this->bShowBestPath = true;
    this->bShowDiffWithPreviousStep = false;
    this->bShouldBeVisibleInGame = false;
    this->CostDisplayMode = ENavCostDisplay::TotalCost;
    this->bPathExist = false;
    this->bPathIsPartial = false;
    this->bPathSearchOutOfNodes = false;
    this->PathfindingTime = 0.00f;
    this->PathCost = 0.00f;
    this->PathfindingSteps = 0;
    this->OtherActor = NULL;
    this->FilterClass = NULL;
    this->ShowStepIndex = -1;
    this->OffsetFromCornersDistance = 0.00f;
}

