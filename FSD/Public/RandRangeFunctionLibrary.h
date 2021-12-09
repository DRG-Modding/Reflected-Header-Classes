#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject RandomStream
#include "RandRange.h"
#include "RandRangeFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class URandRangeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static bool TryPickRandomText(const TArray<FText>& TextArray, UPARAM(Ref) FRandomStream& RandomStream, FText& OutResult);
    
    UFUNCTION(BlueprintPure)
    static FText PickRandomText(const TArray<FText>& TextArray, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintPure)
    static int32 GetValueFromStream(FIRandRange RandRange, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintPure)
    static float GetFloatValue(FRandRange RandRange);
    
    UFUNCTION(BlueprintPure)
    static float GetFloatFromStream(FRandRange RandRange, UPARAM(Ref) FRandomStream& RandomStream);
    
    URandRangeFunctionLibrary();
};

