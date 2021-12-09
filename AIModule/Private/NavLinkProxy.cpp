#include "NavLinkProxy.h"

class AActor;

void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled) {
}

void ANavLinkProxy::ResumePathFollowing(AActor* Agent) {
}


bool ANavLinkProxy::IsSmartLinkEnabled() const {
    return false;
}

bool ANavLinkProxy::HasMovingAgents() const {
    return false;
}

ANavLinkProxy::ANavLinkProxy() {
    this->PointLinks.AddDefaulted(1);
    this->bSmartLinkIsRelevant = false;
}

