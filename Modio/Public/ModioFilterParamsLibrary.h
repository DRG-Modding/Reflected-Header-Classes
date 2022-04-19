#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EModioSortFieldType.h"
#include "ModioFilterParams.h"
#include "EModioSortDirection.h"
#include "ModioModID.h"
#include "ModioFilterParamsLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioFilterParamsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioFilterParamsLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams WithTags(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FString>& NewTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams WithTag(UPARAM(Ref) FModioFilterParams& Filter, const FString& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams WithoutTags(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FString>& NewTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams WithoutTag(UPARAM(Ref) FModioFilterParams& Filter, const FString& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams SortBy(UPARAM(Ref) FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams PagedResults(UPARAM(Ref) FModioFilterParams& Filter, int64 PageNumber, int64 PageSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams NameContainsStrings(UPARAM(Ref) FModioFilterParams& Filter, const FString& SearchString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams NameContains(UPARAM(Ref) FModioFilterParams& Filter, const FString& SearchString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams MatchingIDs(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams MarkedLiveBefore(UPARAM(Ref) FModioFilterParams& Filter, FDateTime LiveBefore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams MarkedLiveAfter(UPARAM(Ref) FModioFilterParams& Filter, FDateTime LiveAfter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams IndexedResults(UPARAM(Ref) FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioFilterParams ExcludingIDs(UPARAM(Ref) FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    
};

