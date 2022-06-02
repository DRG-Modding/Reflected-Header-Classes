#pragma once
#include "CoreMinimal.h"
#include "ModioPagedResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioModInfoList.h"
#include "ModioModInfo.h"
#include "ModioModInfoListLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioModInfoListLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModInfoListLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModInfoList& ModInfoList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FModioModInfo> GetMods(const FModioModInfoList& ModInfoList);
    
};

