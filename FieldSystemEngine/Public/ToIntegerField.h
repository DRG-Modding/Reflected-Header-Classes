#pragma once
#include "CoreMinimal.h"
#include "FieldNodeInt.h"
#include "ToIntegerField.generated.h"

class UFieldNodeFloat;
class UToIntegerField;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UToIntegerField : public UFieldNodeInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFieldNodeFloat* FloatField;
    
    UToIntegerField();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UToIntegerField* SetToIntegerField(const UFieldNodeFloat* NewFloatField);
    
};

