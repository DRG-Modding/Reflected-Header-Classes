#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISense.h"
#include "AISense_Blueprint.generated.h"

class UUserDefinedStruct;
class APawn;
class UAIPerceptionComponent;
class UAISenseEvent;
class AActor;

UCLASS(Abstract, Blueprintable, HideDropdown)
class AIMODULE_API UAISense_Blueprint : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserDefinedStruct> ListenerDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAIPerceptionComponent*> ListenerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAISenseEvent*> UnprocessedEvents;
    
public:
    UAISense_Blueprint();
    UFUNCTION(BlueprintImplementableEvent)
    float OnUpdate(const TArray<UAISenseEvent*>& EventsToProcess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnNewPawn(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllListenerActors(TArray<AActor*>& ListenerActors) const;
    
};

