#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "UserListEntry.generated.h"

UINTERFACE(Blueprintable)
class UMG_API UUserListEntry : public UInterface {
    GENERATED_BODY()
};

class UMG_API IUserListEntry : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnItemSelectionChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnEntryReleased();
    
};

