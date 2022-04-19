#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DestinationActorComponent.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FSD_API UDestinationActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> DestinationActor;
    
public:
    UDestinationActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistToDestinationActor() const;
    
};

