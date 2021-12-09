#pragma once
#include "CoreMinimal.h"
#include "EActorSequenceObjectReferenceType.generated.h"

UENUM()
enum class EActorSequenceObjectReferenceType : uint8 {
    ContextActor,
    ExternalActor,
    Component,
};

