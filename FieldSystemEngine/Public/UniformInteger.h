#pragma once
#include "CoreMinimal.h"
#include "FieldNodeInt.h"
#include "UniformInteger.generated.h"

class UUniformInteger;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UUniformInteger : public UFieldNodeInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Magnitude;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUniformInteger* SetUniformInteger(int32 NewMagnitude);
    
    UUniformInteger();
};

