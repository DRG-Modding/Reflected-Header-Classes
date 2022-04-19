#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldCullingOperationType -FallbackName=EFieldCullingOperationType
#include "CullingField.generated.h"

class UCullingField;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UCullingField : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFieldNodeBase* Culling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFieldNodeBase* Field;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldCullingOperationType> Operation;
    
    UCullingField();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCullingField* SetCullingField(const UFieldNodeBase* NewCulling, const UFieldNodeBase* NewField, TEnumAsByte<EFieldCullingOperationType> NewOperation);
    
};

