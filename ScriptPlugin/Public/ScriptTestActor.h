#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ScriptTestActor.generated.h"

UCLASS(MinimalAPI, NotPlaceable)
class AScriptTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString TestString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TestValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TestBool;
    
    UFUNCTION()
    float TestFunction(float InValue, float InFactor, bool bMultiply);
    
    AScriptTestActor();
};

