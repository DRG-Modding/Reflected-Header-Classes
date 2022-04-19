#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ScriptContextComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class SCRIPTPLUGIN_API UScriptContextComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UScriptContextComponent();
    UFUNCTION(BlueprintCallable)
    void CallScriptFunction(const FString& FunctionName);
    
};

