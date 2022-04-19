#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RDGExplodeDelegateDelegate.h"
#include "RDGComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class URDGComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRDGExplodeDelegate OnDetonated;
    
    URDGComponent();
};

