#pragma once
#include "CoreMinimal.h"
#include "ModioModCollectionEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioModID.h"
#include "EModioModState.h"
#include "ModioModInfo.h"
#include "ModioModCollectionLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModCollectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModCollectionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPath(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioModState GetModState(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioModID GetID(const FModioModCollectionEntry& Entry);
    
};

