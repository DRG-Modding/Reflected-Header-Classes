#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AttackerManagerComponent.generated.h"

class UAttackerPositioningComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAttackerManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAttackerPositioningComponent*> Components;
    
public:
    UAttackerManagerComponent();
};

