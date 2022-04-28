#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFalloffType -FallbackName=EFieldFalloffType
#include "PlaneFalloff.generated.h"

class UPlaneFalloff;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UPlaneFalloff : public UFieldNodeFloat {
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
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFieldFalloffType> Falloff;
    
    UPlaneFalloff();
    UFUNCTION(BlueprintPure)
    UPlaneFalloff* SetPlaneFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, float NewDistance, FVector NewPosition, FVector NewNormal, TEnumAsByte<EFieldFalloffType> NewFalloff);
    
};

