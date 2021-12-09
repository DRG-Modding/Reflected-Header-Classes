#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportHierarchy.generated.h"

UENUM()
enum class EDatasmithImportHierarchy {
    UseMultipleActors,
    UseSingleActor,
    UseOneBlueprint,
};

