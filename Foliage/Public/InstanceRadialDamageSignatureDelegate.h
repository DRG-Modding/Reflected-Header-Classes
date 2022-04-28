#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InstanceRadialDamageSignatureDelegate.generated.h"

class AController;
class AActor;
class UDamageType;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FInstanceRadialDamageSignature, const TArray<int32>&, Instances, const TArray<float>&, Damages, AController*, InstigatedBy, FVector, Origin, float, MaxRadius, const UDamageType*, DamageType, AActor*, DamageCauser);

