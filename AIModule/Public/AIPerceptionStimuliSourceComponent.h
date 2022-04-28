#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIPerceptionStimuliSourceComponent.generated.h"

class UAISense;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UAIPerceptionStimuliSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterAsSource: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAISense>> RegisterAsSourceForSenses;
    
public:
    UAIPerceptionStimuliSourceComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterFromSense(TSubclassOf<UAISense> SenseClass);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterFromPerceptionSystem();
    
    UFUNCTION(BlueprintCallable)
    void RegisterWithPerceptionSystem();
    
    UFUNCTION(BlueprintCallable)
    void RegisterForSense(TSubclassOf<UAISense> SenseClass);
    
};

