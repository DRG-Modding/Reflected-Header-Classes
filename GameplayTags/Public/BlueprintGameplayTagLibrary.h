#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "GameplayTagContainer.h"
#include "GameplayTag.h"
#include "GameplayTagQuery.h"
#include "BlueprintGameplayTagLibrary.generated.h"

class UGameplayTagAssetInterface;
class IGameplayTagAssetInterface;
class AActor;
class UObject;

UCLASS(BlueprintType, MinimalAPI)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool RemoveGameplayTag(UPARAM(Ref) FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_TagTag(FGameplayTag A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    
    UFUNCTION(BlueprintPure)
    static bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);
    
    UFUNCTION(BlueprintPure)
    static bool MatchesAnyTags(FGameplayTag TagOne, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery tagQuery);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer MakeGameplayTagContainerFromArray(const TArray<FGameplayTag>& GameplayTags);
    
    UFUNCTION(BlueprintPure)
    static bool IsTagQueryEmpty(const FGameplayTagQuery& tagQuery);
    
    UFUNCTION(BlueprintPure)
    static bool IsGameplayTagValid(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintPure)
    static bool HasTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);
    
    UFUNCTION(BlueprintPure)
    static bool HasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintPure)
    static bool HasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintPure)
    static bool HasAllMatchingGameplayTags(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, const FGameplayTagContainer& OtherContainer);
    
    UFUNCTION(BlueprintPure)
    static FName GetTagName(const FGameplayTag& GameplayTag);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumGameplayTagsInContainer(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintPure)
    static FString GetDebugStringFromGameplayTagContainer(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintPure)
    static FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    
    UFUNCTION(BlueprintPure)
    static bool DoesTagAssetInterfaceHaveTag(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, FGameplayTag Tag);
    
    UFUNCTION(BlueprintPure)
    static bool DoesContainerMatchTagQuery(const FGameplayTagContainer& TagContainer, const FGameplayTagQuery& tagQuery);
    
    UFUNCTION(BlueprintPure)
    static void BreakGameplayTagContainer(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static void AppendGameplayTagContainers(UPARAM(Ref) FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplayTag(UPARAM(Ref) FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    
    UBlueprintGameplayTagLibrary();
};

