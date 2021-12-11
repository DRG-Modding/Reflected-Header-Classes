#pragma once
#include "CoreMinimal.h"
#include "FieldNodeVector.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RadialVector.generated.h"

class URadialVector;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API URadialVector : public UFieldNodeVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadialVector* SetRadialVector(float NewMagnitude, FVector NewPosition);
    
    URadialVector();
};

