#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "OptionalUICategory.generated.h"

class UOptionalUICategory;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOptionalUICategoryOnVisibilityChanged, UOptionalUICategory*, Category, bool, IsVisible);

UCLASS(BlueprintType)
class UOptionalUICategory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOptionalUICategoryOnVisibilityChanged OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisible(UObject* WorldContext, bool IsCategoryVisible);
    
    UFUNCTION(BlueprintPure)
    bool IsVisible(UObject* WorldContext) const;
    
    UOptionalUICategory();
};

