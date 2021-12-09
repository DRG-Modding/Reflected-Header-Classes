#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "LookingAtContentWidget.generated.h"

class UPawnAfflictionComponent;
class AActor;
class USimpleObjectInfoComponent;
class UHealth;
class IHealth;
class UHackingUsableComponent;
class UPetComponent;

UCLASS(Abstract, EditInlineNew)
class ULookingAtContentWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> CurrentTarget;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<USimpleObjectInfoComponent> CurrentTargetInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TScriptInterface<IHealth> CurrentTargetHealth;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UHackingUsableComponent> CurrentHackingComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UPetComponent> CurrentPetComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWeakPointHit;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentTarget(float DeltaSeconds, AActor* InTargetActor, const TScriptInterface<IHealth>& InTargetHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWeakPointHit();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNewTarget(AActor* InCurrentTarget);
    
public:
    UFUNCTION(BlueprintPure)
    FText GetTargetOwnerName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetTargetName() const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetHealthPct() const;
    
    ULookingAtContentWidget();
};

