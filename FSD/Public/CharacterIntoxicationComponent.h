#pragma once
#include "CoreMinimal.h"
#include "CountDownFloat.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EDrinkableAlcoholStrength.h"
#include "EIntoxicationState.h"
#include "LerpingPercent.h"
#include "CharacterIntoxicationComponent.generated.h"

class UCurveFloat;
class APlayerCharacter;
class UDrinkableDataAsset;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterIntoxicationComponentOnPassOutDrunk, APlayerCharacter*, Player);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterIntoxicationComponentOnIntoxicationChanged, APlayerCharacter*, Player, float, Progress);

UCLASS(Blueprintable, MinimalAPI)
class UCharacterIntoxicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharacterIntoxicationComponentOnIntoxicationChanged OnIntoxicationChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterIntoxicationComponentOnPassOutDrunk OnPassOutDrunk;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EIntoxicationState CurrentState;
    
    UPROPERTY(Replicated, Transient)
    FLerpingPercent IntoxicationPercent;
    
    UPROPERTY(EditAnywhere)
    float IntoxicationLerpSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TimeDrunk;
    
    UPROPERTY(EditAnywhere)
    FCountDownFloat SoberingUpCoolDown;
    
    UPROPERTY(EditAnywhere)
    uint8 SoberingPercent;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveStateChange(EIntoxicationState NewState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePassOutDrunk();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDrunkEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDrunkBegin();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPassOutDrunk() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsOnSpaceRig() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlled() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDrunk() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool HasAuthority() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetSoberingUpCoolDown() const;
    
    UFUNCTION(BlueprintPure)
    float GetIntoxicationProgressMapped(UCurveFloat* Curve) const;
    
    UFUNCTION(BlueprintPure)
    float GetIntoxicationProgress() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    int32 GetAlcoholPct(EDrinkableAlcoholStrength Strength) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Consume(UDrinkableDataAsset* Drinkable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearIntoxication();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterIntoxicationComponent();
};

