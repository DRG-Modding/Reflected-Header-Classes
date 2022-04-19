#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SeamlessTravelEventActivator.generated.h"

class USeamlessTravelEventKey;

UCLASS(meta=(BlueprintSpawnableComponent))
class FSD_API USeamlessTravelEventActivator : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USeamlessTravelEventKey* EventKey;
    
public:
    USeamlessTravelEventActivator();
};

