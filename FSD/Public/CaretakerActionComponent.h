#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "CaretakerActionComponent.generated.h"

class ACaretaker;

UCLASS(Abstract, Blueprintable)
class UCaretakerActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool StartTickOnUse;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsUsing)
    bool IsUsing;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UseAction();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerAction();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopUsing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTriggered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStarted();
    
protected:
    UFUNCTION()
    void OnRep_IsUsing();
    
    UFUNCTION(BlueprintPure)
    ACaretaker* GetCaretaker() const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent, BlueprintPure)
    bool CanUse() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCaretakerActionComponent();
};

