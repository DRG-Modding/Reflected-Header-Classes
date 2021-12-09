#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ScriptPluginComponent.generated.h"

UCLASS(Abstract, BlueprintType, EditInlineNew)
class SCRIPTPLUGIN_API UScriptPluginComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    bool CallScriptFunction(const FString& FunctionName);
    
    UScriptPluginComponent();
};

