#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "NoiseField.generated.h"

class UNoiseField;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UNoiseField : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UNoiseField();
    UFUNCTION(BlueprintPure)
    UNoiseField* SetNoiseField(float NewMinRange, float NewMaxRange, FTransform NewTransform);
    
};

