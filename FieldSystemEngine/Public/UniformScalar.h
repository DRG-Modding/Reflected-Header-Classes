#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
#include "UniformScalar.generated.h"

class UUniformScalar;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UUniformScalar : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Magnitude;
    
    UUniformScalar();
    UFUNCTION(BlueprintPure)
    UUniformScalar* SetUniformScalar(float NewMagnitude);
    
};

