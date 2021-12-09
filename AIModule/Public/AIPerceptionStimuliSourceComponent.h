#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "AIPerceptionStimuliSourceComponent.generated.h"

class UAISense;

UCLASS(BlueprintType, Config=Game)
class AIMODULE_API UAIPerceptionStimuliSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    uint8 bAutoRegisterAsSource: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UAISense>> RegisterAsSourceForSenses;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterFromSense(TSubclassOf<UAISense> SenseClass);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterFromPerceptionSystem();
    
    UFUNCTION(BlueprintCallable)
    void RegisterWithPerceptionSystem();
    
    UFUNCTION(BlueprintCallable)
    void RegisterForSense(TSubclassOf<UAISense> SenseClass);
    
    UAIPerceptionStimuliSourceComponent();
};

