#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "MessageBehaviorTreeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "DelegateDelegate.h"
#include "FSDAIController.generated.h"

class APlayerCharacter;

UCLASS()
class AFSDAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMessageBehaviorTree OnMessageBehaviorTreeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegate OnAlertedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> LOSTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> TargetedPlayer;
    
public:
    AFSDAIController();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAlerted(bool isAlerted);
    
    UFUNCTION(BlueprintCallable)
    void ResumeLogic();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBlackboardChanges(const FName& Key);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseLogic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackingChanged(bool attacking);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetIsAlerted() const;
    
};

