#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: CoreUObject Quat
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "FSDConversionLibrary.generated.h"

class AActor;
class USceneComponent;

UCLASS(BlueprintType)
class UFSDConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantizeNormal VectorToNetQuantizeNormal(FVector Vec);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize VectorToNetQuantize(FVector Vec);
    
    UFUNCTION(BlueprintPure)
    static FVector QuatToVector(FQuat Quat);
    
    UFUNCTION(BlueprintPure)
    static FRotator QuatToRotator(FQuat Quat);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantizeNormal QuadToNetQuantizeNormal(FQuat Quat);
    
    UFUNCTION(BlueprintPure)
    static FVector ComponentToWorldLocation(USceneComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static FVector ActorToWorldLocation(AActor* Actor);
    
    UFSDConversionLibrary();
};
