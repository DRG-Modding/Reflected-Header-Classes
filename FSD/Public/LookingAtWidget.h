#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "LookingAtWidget.generated.h"

class UPawnAfflictionComponent;
class UHealth;
class IHealth;
class UCharacterSightComponent;
class APlayerCharacter;
class AActor;
class UHealthComponentBase;

UCLASS(EditInlineNew)
class ULookingAtWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSelectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLostDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCharacterSightComponent> CharacterSight;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHealth> CurrentTargetHealth;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanCurrentTargetTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float TargetLostTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bTargetSet;
    
public:
    ULookingAtWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentTarget(AActor* NewActor, const TScriptInterface<IHealth>& HealthComponent, float OverrideTargetLostTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTargetLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNewTarget(AActor* InCurrentTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsValidTarget(AActor* TargetActor, const TScriptInterface<IHealth>& TargetHealth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossFight(const TScriptInterface<IHealth>& Health) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponentBase* GetLookingAtHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLookingAtActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterTemperatureEffect(float& TemperatureEffect) const;
    
};

