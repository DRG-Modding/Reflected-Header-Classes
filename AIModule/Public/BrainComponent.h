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
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UBrainComponent();
};
