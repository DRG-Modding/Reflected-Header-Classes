#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GameplayTag.h"
#include "GameplayTagContainer.h"
#include "GameplayTagQuery.h"
#include "BlueprintGameplayTagLibrary.generated.h"

class UObject;
class UGameplayTagAssetInterface;
class IGameplayTagAssetInterface;
class AActor;

UCLASS(BlueprintType)
class GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintGameplayTagLibrary();
    UFUNCTION(BlueprintCallable)
    static bool RemoveGameplayTag(UPARAM(Ref) FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_TagTag(FGameplayTag A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, const FString& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MatchesAnyTags(FGameplayTag TagOne, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery tagQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer MakeGameplayTagContainerFromArray(const TArray<FGameplayTag>& GameplayTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTagQueryEmpty(const FGameplayTagQuery& tagQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameplayTagValid(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAllMatchingGameplayTags(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, const FGameplayTagContainer& OtherContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetTagName(const FGameplayTag& GameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumGameplayTagsInContainer(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDebugStringFromGameplayTagContainer(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesTagAssetInterfaceHaveTag(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesContainerMatchTagQuery(const FGameplayTagContainer& TagContainer, const FGameplayTagQuery& tagQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakGameplayTagContainer(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static void AppendGameplayTagContainers(UPARAM(Ref) FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplayTag(UPARAM(Ref) FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    
};

