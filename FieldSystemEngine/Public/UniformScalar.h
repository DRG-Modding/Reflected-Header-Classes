#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
#include "UniformScalar.generated.h"

class UUniformScalar;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UUniformScalar : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UFUNCTION(BlueprintPure)
    UUniformScalar* SetUniformScalar(float NewMagnitude);
    
    UUniformScalar();
};

