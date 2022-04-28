#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BoxFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UBoxFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBoxFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox CreateBoxAt(FVector Location, FVector Size);
    
    UFUNCTION(BlueprintCallable)
    static FVector ClosestPointToBox(FVector Pos, const FBox& Box);
    
    UFUNCTION(BlueprintPure)
    static float BoxSize(FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BoxExtends(FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BoxCenter(FBox Box);
    
};

