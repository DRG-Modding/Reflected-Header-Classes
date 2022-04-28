#pragma once
#include "CoreMinimal.h"
#include "FieldNodeVector.h"
#include "RandomVector.generated.h"

class URandomVector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API URandomVector : public UFieldNodeVector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Magnitude;
    
    URandomVector();
    UFUNCTION(BlueprintPure)
    URandomVector* SetRandomVector(float NewMagnitude);
    
};

