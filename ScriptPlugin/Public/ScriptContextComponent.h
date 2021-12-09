#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ScriptContextComponent.generated.h"

UCLASS(BlueprintType)
class SCRIPTPLUGIN_API UScriptContextComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void CallScriptFunction(const FString& FunctionName);
    
    UScriptContextComponent();
};

