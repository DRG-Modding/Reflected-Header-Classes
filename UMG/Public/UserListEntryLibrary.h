#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "UserListEntryLibrary.generated.h"

class UUserListEntry;
class IUserListEntry;
class UListViewBase;

UCLASS(BlueprintType)
class UMG_API UUserListEntryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsListItemSelected(TScriptInterface<IUserListEntry> UserListEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsListItemExpanded(TScriptInterface<IUserListEntry> UserListEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UListViewBase* GetOwningListView(TScriptInterface<IUserListEntry> UserListEntry);
    
    UUserListEntryLibrary();
};

