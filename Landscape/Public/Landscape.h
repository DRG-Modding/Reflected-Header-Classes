#pragma once
#include "CoreMinimal.h"
#include "LandscapeProxy.h"
#include "Landscape.generated.h"

UCLASS(MinimalAPI)
class ALandscape : public ALandscapeProxy {
    GENERATED_BODY()
public:
    ALandscape();
};

