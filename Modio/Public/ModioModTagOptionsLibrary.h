#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioModTagInfo.h"
#include "ModioPagedResult.h"
#include "ModioModTagOptions.h"
#include "ModioModTagOptionsLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModTagOptionsLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FModioModTagInfo> GetTags(const FModioModTagOptions& ModTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioPagedResult GetPagedResult(const FModioModTagOptions& ModTags);
    
};

