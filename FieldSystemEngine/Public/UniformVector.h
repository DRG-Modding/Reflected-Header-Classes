#pragma once
#include "CoreMinimal.h"
#include "FieldNodeVector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "UniformVector.generated.h"

class UUniformVector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UUniformVector : public UFieldNodeVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UUniformVector();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUniformVector* SetUniformVector(float NewMagnitude, FVector NewDirection);
    
};

