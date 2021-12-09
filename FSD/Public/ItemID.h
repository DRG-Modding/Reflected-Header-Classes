#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavableDataAsset.h"
#include "EItemCategory.h"
#include "ItemID.generated.h"

class AItem;
class UPlayerCharacterID;
class AActor;

UCLASS()
class FSD_API UItemID : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> Item;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* ItemOwner;
    
    UPROPERTY(EditAnywhere)
    EItemCategory ItemCategory;
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<AItem> GetItemClass() const;
    
    UFUNCTION(BlueprintPure)
    EItemCategory GetItemCategory() const;
    
    UFUNCTION(BlueprintPure)
    AItem* GetItem() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetActorClass() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActor() const;
    
    UItemID();
};

