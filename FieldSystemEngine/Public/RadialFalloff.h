#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFalloffType -FallbackName=EFieldFalloffType
#include "RadialFalloff.generated.h"

class URadialFalloff;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API URadialFalloff : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Magnitude;
    
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    float Default;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFieldFalloffType> Falloff;
    
    URadialFalloff();
    UFUNCTION(BlueprintPure)
    URadialFalloff* SetRadialFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, float NewRadius, FVector NewPosition, TEnumAsByte<EFieldFalloffType> NewFalloff);
    
};

