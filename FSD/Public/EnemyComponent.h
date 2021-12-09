#pragma once
#include "CoreMinimal.h"
#include "SimpleObjectInfoComponent.h"
#include "EnemyComponent.generated.h"

class UDialogDataAsset;
class UEnemyFamily;
class UEnemyID;
class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyComponentOnMixerNameChange, const FString&, mixerName);

UCLASS()
class UEnemyComponent : public USimpleObjectInfoComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnemyFamily* Family;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* KillShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnemyID* EnemyID;
    
    UPROPERTY(BlueprintReadOnly)
    FString mixerName;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyComponentOnMixerNameChange OnMixerNameChange;
    
public:
    UFUNCTION()
    UEnemyID* GetID();
    
    UFUNCTION(BlueprintPure)
    FText GetFamilyName() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetFamilyIcon() const;
    
    UEnemyComponent();
};

