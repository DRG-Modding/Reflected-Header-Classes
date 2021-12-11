#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioModTagOptions.h"
#include "ModioModTagInfo.h"
#include "ModioPagedResult.h"
#include "ModioModTagOptionsLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FModioModTagInfo> GetTags(const FModioModTagOptions& ModTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModTagOptions& ModTags);
    
public:
    UModioModTagOptionsLibrary();
};

