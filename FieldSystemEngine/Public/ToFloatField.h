#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
#include "ToFloatField.generated.h"

class UFieldNodeInt;
class UToFloatField;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UToFloatField : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFieldNodeInt* IntField;
    
    UToFloatField();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UToFloatField* SetToFloatField(const UFieldNodeInt* IntegerField);
    
};

