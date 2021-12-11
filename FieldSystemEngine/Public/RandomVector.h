#pragma once
#include "CoreMinimal.h"
#include "FieldNodeVector.h"
#include "RandomVector.generated.h"

class URandomVector;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API URandomVector : public UFieldNodeVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URandomVector* SetRandomVector(float NewMagnitude);
    
    URandomVector();
};

