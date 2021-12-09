#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "SaveGameIDInterface.h"
#include "LoadoutItem.h"
#include "ItemIDInterface.h"
#include "ArmorPiece.generated.h"

class UPawnStat;
class UUpgradableGearComponent;
class UItemID;
class ALoadoutItemProxy;
class AArmorPiece;

UCLASS(Abstract)
class AArmorPiece : public AActor, public ISaveGameIDInterface, public IItemIDInterface, public ILoadoutItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UUpgradableGearComponent* Upgradable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPawnStat*, float> StatModifiers;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALoadoutItemProxy> LoadoutProxy;
    
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> WeaponPreviewClass;
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintPure)
    static AArmorPiece* GetArmorPieceDefaultObject(TSubclassOf<AArmorPiece> armorPieceClass);
    
    AArmorPiece();
};

