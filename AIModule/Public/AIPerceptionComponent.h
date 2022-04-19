#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ActorPerceptionUpdatedDelegateDelegate.h"
#include "ActorPerceptionInfoUpdatedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "PerceptionUpdatedDelegateDelegate.h"
#include "ActorPerceptionBlueprintInfo.h"
#include "AIPerceptionComponent.generated.h"

class UAISenseConfig;
class UAISense;
class AAIController;
class AActor;

UCLASS(BlueprintType, Config=Game, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UAIPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SensesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense> DominantSense;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPerceptionUpdatedDelegate OnPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FActorPerceptionUpdatedDelegate OnTargetPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FActorPerceptionInfoUpdatedDelegate OnTargetPerceptionInfoUpdated;
    
    UAIPerceptionComponent();
    UFUNCTION(BlueprintCallable)
    void SetSenseEnabled(TSubclassOf<UAISense> SenseClass, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestStimuliListenerUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerceivedHostileActorsBySense(const TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerceivedHostileActors(TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKnownPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentlyPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void ForgetAll();
    
};

