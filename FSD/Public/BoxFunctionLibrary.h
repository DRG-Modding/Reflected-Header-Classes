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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox CreateBoxAt(FVector Location, FVector Size);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClosestPointToBox(FVector Pos, const FBox& Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BoxSize(FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BoxExtends(FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BoxCenter(FBox Box);
    
    UBoxFunctionLibrary();
};

