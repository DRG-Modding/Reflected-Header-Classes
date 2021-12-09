#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "LookingAtWidget.generated.h"

class UPawnAfflictionComponent;
class UHealthComponentBase;
class APlayerCharacter;
class UCharacterSightComponent;
class AActor;
class UHealth;
class IHealth;

UCLASS(EditInlineNew)
class ULookingAtWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetSelectDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetLostDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UCharacterSightComponent> CharacterSight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TScriptInterface<IHealth> CurrentTargetHealth;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool CanCurrentTargetTakeDamage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TargetLostTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTargetSet;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTarget(AActor* NewActor, const TScriptInterface<IHealth>& HealthComponent, float OverrideTargetLostTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentTarget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTargetLost();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNewTarget(AActor* InCurrentTarget);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsValidTarget(AActor* TargetActor, const TScriptInterface<IHealth>& TargetHealth) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBossFight(const TScriptInterface<IHealth>& Health) const;
    
    UFUNCTION(BlueprintPure)
    UHealthComponentBase* GetLookingAtHealth() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLookingAtActor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCharacterTemperatureEffect(float& TemperatureEffect) const;
    
public:
    ULookingAtWidget();
};

