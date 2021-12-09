#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "BoxFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UBoxFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FBox CreateBoxAt(FVector Location, FVector Size);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClosestPointToBox(FVector Pos, const FBox& Box);
    
    UFUNCTION(BlueprintPure)
    static float BoxSize(FBox Box);
    
    UFUNCTION(BlueprintPure)
    static FVector BoxExtends(FBox Box);
    
    UFUNCTION(BlueprintPure)
    static FVector BoxCenter(FBox Box);
    
    UBoxFunctionLibrary();
};

