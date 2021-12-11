#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "ReturnResultsTerminal.generated.h"

class UReturnResultsTerminal;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UReturnResultsTerminal : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReturnResultsTerminal* SetReturnResultsTerminal();
    
    UReturnResultsTerminal();
};

