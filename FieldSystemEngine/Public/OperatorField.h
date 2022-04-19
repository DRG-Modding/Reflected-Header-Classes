#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldOperationType -FallbackName=EFieldOperationType
#include "OperatorField.generated.h"

class UOperatorField;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UOperatorField : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFieldNodeBase* RightField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFieldNodeBase* LeftField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldOperationType> Operation;
    
    UOperatorField();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOperatorField* SetOperatorField(float NewMagnitude, const UFieldNodeBase* NewLeftField, const UFieldNodeBase* NewRightField, TEnumAsByte<EFieldOperationType> NewOperation);
    
};

