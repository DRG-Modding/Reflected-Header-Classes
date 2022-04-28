#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UserObjectListEntryLibrary.generated.h"

class UObject;
class UUserObjectListEntry;
class IUserObjectListEntry;

UCLASS(Blueprintable)
class UMG_API UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserObjectListEntryLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetListItemObject(TScriptInterface<IUserObjectListEntry> UserObjectListEntry);
    
};

