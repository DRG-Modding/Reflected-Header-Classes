#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponentInstanceData -FallbackName=ActorComponentInstanceData
#include "NavLinkCustomInstanceData.generated.h"

USTRUCT()
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 NavLinkUserId;
    
    NAVIGATIONSYSTEM_API FNavLinkCustomInstanceData();
};

