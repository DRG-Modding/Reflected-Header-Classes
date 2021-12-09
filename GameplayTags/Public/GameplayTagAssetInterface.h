#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "GameplayTag.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UGameplayTagAssetInterface : public UInterface {
    GENERATED_BODY()
};

class IGameplayTagAssetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual  return false; HasMatchingGameplayTag(FGameplayTag TagToCheck) const PURE_VIRTUAL(HasMatchingGameplayTag,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return false; HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAnyMatchingGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return false; HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAllMatchingGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

