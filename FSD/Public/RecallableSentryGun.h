#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RecallableActor.h"
#include "RecallableSentryGun.generated.h"

class APlayerCharacter;
class ASentryGun;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunOnSentryIndexChanged, int32, Index);

UCLASS(Abstract)
class ARecallableSentryGun : public ARecallableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRecallableSentryGunOnSentryIndexChanged OnSentryIndexChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SentryIndex)
    int32 SentryIndex;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnSentryReady(ASentryGun* SentryGun, APlayerCharacter* PlayerCharacter);
    
    UFUNCTION()
    void OnRep_SentryIndex();
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void GetStateDescription(FText& Description) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TSubclassOf<ASentryGun> GetSentryGunClass() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    ASentryGun* GetSentryGun();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARecallableSentryGun();
};

