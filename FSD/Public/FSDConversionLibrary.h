#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "FSDConversionLibrary.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class UFSDConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDConversionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantizeNormal VectorToNetQuantizeNormal(FVector Vec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantize VectorToNetQuantize(FVector Vec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector QuatToVector(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator QuatToRotator(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantizeNormal QuadToNetQuantizeNormal(FQuat Quat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ComponentToWorldLocation(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ActorToWorldLocation(AActor* Actor);
    
};

