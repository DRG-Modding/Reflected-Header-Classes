#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
//CROSS-MODULE INCLUDE: FieldSystemCore EFieldOperationType
#include "OperatorField.generated.h"

class UOperatorField;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UOperatorField : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UFieldNodeBase* RightField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UFieldNodeBase* LeftField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldOperationType> Operation;
    
    UFUNCTION(BlueprintPure)
    UOperatorField* SetOperatorField(float NewMagnitude, const UFieldNodeBase* NewRightField, const UFieldNodeBase* NewLeftField, TEnumAsByte<EFieldOperationType> NewOperation);
    
    UOperatorField();
};

