#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "CraftingCost.h"
#include "Craftable.generated.h"

class AFSDPlayerState;
class UPlayerCharacterID;
class UObject;
class UTexture2D;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FSD_API UCraftable : public UInterface {
    GENERATED_BODY()
};

class FSD_API ICraftable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void PreviewItem(AFSDPlayerState* PlayerState, bool Show) const PURE_VIRTUAL(PreviewItem,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return false; IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID) const PURE_VIRTUAL(IsOwned,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return TArray<FCraftingCost>(); GetResourceCost() const PURE_VIRTUAL(GetResourceCost,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return 0; GetRequiredPlayerRank() const PURE_VIRTUAL(GetRequiredPlayerRank,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return 0; GetCraftingCreditsCost() const PURE_VIRTUAL(GetCraftingCreditsCost,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return FText::GetEmpty(); GetCraftableName() const PURE_VIRTUAL(GetCraftableName,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return NULL; GetCraftableIcon() const PURE_VIRTUAL(GetCraftableIcon,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return FText::GetEmpty(); GetCraftableDescription() const PURE_VIRTUAL(GetCraftableDescription,);
    
    UFUNCTION(BlueprintCallable)
    virtual void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID) const PURE_VIRTUAL(CraftItem,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return false; CanCraft(UObject* WorldContextObject) const PURE_VIRTUAL(CanCraft,);
    
};

