#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ScriptTestActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AScriptTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestString;
    
    UPROPERTY(EditAnywhere)
    float TestValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestBool;
    
    AScriptTestActor();
    UFUNCTION()
    float TestFunction(float InValue, float InFactor, bool bMultiply);
    
};

