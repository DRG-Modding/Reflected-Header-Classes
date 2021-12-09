#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioModCollectionEntry.h"
#include "ModioModID.h"
#include "EModioModState.h"
#include "ModioModInfo.h"
#include "ModioModCollectionLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModCollectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FString GetPath(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintPure)
    static EModioModState GetModState(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintPure)
    static FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintPure)
    static FModioModID GetID(const FModioModCollectionEntry& Entry);
    
    UModioModCollectionLibrary();
};

