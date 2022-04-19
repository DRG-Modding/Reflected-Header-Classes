#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "ReturnResultsTerminal.generated.h"

class UReturnResultsTerminal;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UReturnResultsTerminal : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UReturnResultsTerminal();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReturnResultsTerminal* SetReturnResultsTerminal();
    
};

