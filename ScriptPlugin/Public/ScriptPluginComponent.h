#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ScriptPluginComponent.generated.h"

UCLASS(Abstract, BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class SCRIPTPLUGIN_API UScriptPluginComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UScriptPluginComponent();
    UFUNCTION(BlueprintCallable)
    bool CallScriptFunction(const FString& FunctionName);
    
};

