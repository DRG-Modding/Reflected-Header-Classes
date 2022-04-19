#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "LandscapeSubsystem.generated.h"

UCLASS(MinimalAPI)
class ULandscapeSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    ULandscapeSubsystem();
};

