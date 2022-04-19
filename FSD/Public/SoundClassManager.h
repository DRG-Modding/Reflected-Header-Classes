#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "SoundClassManager.generated.h"

UCLASS()
class USoundClassManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USoundClassManager();
};

