#pragma once
#include "CoreMinimal.h"
#include "ModioPagedResult.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioModTagInfo.h"
#include "ModioModTagOptions.h"
#include "ModioModTagOptionsLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintPure)
    static TArray<FModioModTagInfo> GetTags(const FModioModTagOptions& ModTags);
    
    UFUNCTION(BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModTagOptions& ModTags);
    
public:
    UModioModTagOptionsLibrary();
};

