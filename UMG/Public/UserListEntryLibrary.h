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
    UFUNCTION(BlueprintPure)
    static bool IsListItemSelected(TScriptInterface<IUserListEntry> UserListEntry);
    
    UFUNCTION(BlueprintPure)
    static bool IsListItemExpanded(TScriptInterface<IUserListEntry> UserListEntry);
    
    UFUNCTION(BlueprintPure)
    static UListViewBase* GetOwningListView(TScriptInterface<IUserListEntry> UserListEntry);
    
    UUserListEntryLibrary();
};

