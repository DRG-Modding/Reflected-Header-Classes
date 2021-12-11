#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioModCollectionEntry.h"
#include "ModioModInfo.h"
#include "EModioModState.h"
#include "ModioModID.h"
#include "ModioModCollectionLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModCollectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPath(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioModState GetModState(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioModID GetID(const FModioModCollectionEntry& Entry);
    
    UModioModCollectionLibrary();
};

