#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EModioModState.h"
#include "ModioModCollectionEntry.h"
#include "ModioModInfo.h"
#include "ModioModID.h"
#include "ModioModCollectionLibrary.generated.h"

UCLASS(Blueprintable)
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

