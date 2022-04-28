#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptContext.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class SCRIPTPLUGIN_API UScriptContext : public UObject {
    GENERATED_BODY()
public:
    UScriptContext();
    UFUNCTION(BlueprintCallable)
    void CallScriptFunction(const FString& FunctionName);
    
};

