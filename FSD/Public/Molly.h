#pragma once
#include "CoreMinimal.h"
#include "MULE.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "Molly.generated.h"

class UOutlineComponent;
class UDialogDataAsset;
class APlayerCharacter;
class UResourceBank;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMollyOnCalledByChanged, APlayerCharacter*, InPlayer);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMollyOnReachedDropShip);

UCLASS(Abstract)
class AMolly : public AMULE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMollyOnCalledByChanged OnCalledByChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UResourceBank* ResourceBank;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FMollyOnReachedDropShip OnReachedDropShip;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CalledBy)
    TWeakObjectPtr<APlayerCharacter> CalledBy;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOpenForDeposit(bool Open);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void SetGotoDropShip(const FVector& Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCalledBy(APlayerCharacter* InPlayer);
    
protected:
    UFUNCTION()
    void OnRep_CalledBy();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    UDialogDataAsset* GetCallingShout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableButton();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AMolly();
};

