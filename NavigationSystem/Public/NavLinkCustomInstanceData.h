#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponentInstanceData
#include "NavLinkCustomInstanceData.generated.h"

USTRUCT()
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 NavLinkUserId;
    
    NAVIGATIONSYSTEM_API FNavLinkCustomInstanceData();
};

