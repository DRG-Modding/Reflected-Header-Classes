#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "AIResourceInterface.h"
#include "BrainComponent.generated.h"

class UBlackboardComponent;
class AAIController;

UCLASS(BlueprintType)
class AIMODULE_API UBrainComponent : public UActorComponent, public IAIResourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopLogic(const FString& reason);
    
    UFUNCTION(BlueprintCallable)
    void StartLogic();
    
    UFUNCTION(BlueprintCallable)
    void RestartLogic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UBrainComponent();
    
    // Fix for true pure virtual functions not being implemented
};

