#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PerceptionUpdatedDelegateDelegate.h"
#include "ActorPerceptionInfoUpdatedDelegateDelegate.h"
#include "ActorPerceptionUpdatedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "ActorPerceptionBlueprintInfo.h"
#include "AIPerceptionComponent.generated.h"

class AActor;
class UAISenseConfig;
class UAISense;
class AAIController;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UAIPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SensesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense> DominantSense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerceptionUpdatedDelegate OnPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorPerceptionUpdatedDelegate OnTargetPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorPerceptionInfoUpdatedDelegate OnTargetPerceptionInfoUpdated;
    
    UAIPerceptionComponent();
    UFUNCTION(BlueprintCallable)
    void SetSenseEnabled(TSubclassOf<UAISense> SenseClass, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestStimuliListenerUpdate();
    
    UFUNCTION()
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

