#pragma once
#include "CoreMinimal.h"
#include "ModioPagedResult.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioModInfoList.h"
#include "ModioModInfo.h"
#include "ModioModInfoListLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioModInfoListLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModInfoList& ModInfoList);
    
    UFUNCTION(BlueprintPure)
    static TArray<FModioModInfo> GetMods(const FModioModInfoList& ModInfoList);
    
public:
    UModioModInfoListLibrary();
};

