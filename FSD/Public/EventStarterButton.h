#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EInputKeys.h"
#include "EventStarterButton.generated.h"

class AEventStarterButton;
class USceneComponent;
class USingleUsableComponent;
class APlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventStarterButtonOnBootupEvent, AEventStarterButton*, pushedButton);

UCLASS()
class AEventStarterButton : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USingleUsableComponent* Usable;
    
    UPROPERTY()
    FEventStarterButtonOnBootupEvent OnBootupEvent;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Booted)
    bool Booted;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_OpenForUse)
    bool IsOpenForUse;
    
    UPROPERTY(Replicated, Transient)
    bool IsEventActive;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsEventActive(bool NewIsEventActive);
    
    UFUNCTION()
    void OnUseProgress(float Progress);
    
protected:
    UFUNCTION()
    void OnRep_OpenForUse();
    
    UFUNCTION()
    void OnRep_Booted();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenedForUse(bool wasOpened);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBooted();
    
public:
    UFUNCTION()
    void CloseForUse(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void BootUpEvent();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEventStarterButton();
};

