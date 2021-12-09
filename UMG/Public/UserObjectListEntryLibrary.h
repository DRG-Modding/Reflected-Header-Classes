#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "UserObjectListEntryLibrary.generated.h"

class UObject;
class UUserObjectListEntry;
class IUserObjectListEntry;

UCLASS(BlueprintType)
class UMG_API UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UObject* GetListItemObject(TScriptInterface<IUserObjectListEntry> UserObjectListEntry);
    
    UUserObjectListEntryLibrary();
};

