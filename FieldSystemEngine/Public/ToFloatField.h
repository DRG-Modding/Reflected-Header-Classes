#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
#include "ToFloatField.generated.h"

class UToFloatField;
class UFieldNodeInt;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UToFloatField : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UFieldNodeInt* IntField;
    
    UFUNCTION(BlueprintPure)
    UToFloatField* SetToFloatField(const UFieldNodeInt* IntegerField);
    
    UToFloatField();
};

