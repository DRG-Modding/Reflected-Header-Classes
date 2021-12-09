#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "SpecialAttackComponent.generated.h"

class UAnimMontage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialAttackComponentOnAttackActionNotify, FName, nameValue);

UCLASS()
class USpecialAttackComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> Montages;
    
    UPROPERTY(BlueprintAssignable)
    FSpecialAttackComponentOnAttackActionNotify OnAttackActionNotify;
    
    UFUNCTION()
    void TriggerAttack(FName Name);
    
    UFUNCTION(BlueprintNativeEvent)
    UAnimMontage* SelectMontage() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_OnPerformAttack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_OnAborted();
    
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFrozen(bool IsFrozen);
    
public:
    USpecialAttackComponent();
};

