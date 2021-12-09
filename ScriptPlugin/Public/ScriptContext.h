#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ScriptContext.generated.h"

UCLASS(BlueprintType, DefaultToInstanced)
class SCRIPTPLUGIN_API UScriptContext : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void CallScriptFunction(const FString& FunctionName);
    
    UScriptContext();
};

