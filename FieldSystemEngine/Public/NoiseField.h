#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "NoiseField.generated.h"

class UNoiseField;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UNoiseField : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNoiseField* SetNoiseField(float NewMinRange, float NewMaxRange, FTransform NewTransform);
    
    UNoiseField();
};

