#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ActorPerceptionBlueprintInfo.h"
#include "AIStimulus.h"
//CROSS-MODULE INCLUDE: Engine EEndPlayReason
#include "AIPerceptionComponent.generated.h"

class AActor;
class AAIController;
class UAISense;
class UAISenseConfig;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIPerceptionComponentOnPerceptionUpdated, const TArray<AActor*>&, UpdatedActors);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIPerceptionComponentOnTargetPerceptionUpdated, AActor*, Actor, FAIStimulus, Stimulus);

UCLASS(BlueprintType, Config=Game)
class AIMODULE_API UAIPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UAISenseConfig*> SensesConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAISense> DominantSense;
    
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
public:
    UPROPERTY(BlueprintAssignable)
    FAIPerceptionComponentOnPerceptionUpdated OnPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FAIPerceptionComponentOnTargetPerceptionUpdated OnTargetPerceptionUpdated;
    
    UFUNCTION(BlueprintCallable)
    void SetSenseEnabled(TSubclassOf<UAISense> SenseClass, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestStimuliListenerUpdate();
    
    UFUNCTION()
    void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintPure)
    void GetPerceivedHostileActors(TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    void GetPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    void GetKnownPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentlyPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void ForgetAll();
    
    UAIPerceptionComponent();
};

