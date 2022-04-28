#pragma once
#include "CoreMinimal.h"
#include "ModioModInfoList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioModInfo.h"
#include "ModioPagedResult.h"
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

