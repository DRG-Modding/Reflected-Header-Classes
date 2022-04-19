#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioOptionalTerms.h"
#include "ModioOptionalUser.h"
#include "ModioModProgressInfo.h"
#include "ModioOptionalModProgressInfo.h"
#include "ModioOptionalModTagOptions.h"
#include "ModioOptionalModInfoList.h"
#include "ModioOptionalModInfo.h"
#include "ModioOptionalModDependencyList.h"
#include "ModioTerms.h"
#include "ModioOptionalImage.h"
#include "ModioUser.h"
#include "ModioModTagOptions.h"
#include "ModioModInfoList.h"
#include "ModioModInfo.h"
#include "ModioModDependencyList.h"
#include "ModioImage.h"
#include "ModioOptionalLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioOptionalLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioOptionalLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet_ModioOptionalUser(const FModioOptionalUser& OptionalUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet_ModioOptionalImage(const FModioOptionalImage& OptionalImage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValue_ModioOptionalUser(const FModioOptionalUser& OptionalUser, FModioUser& User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValue_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms, FModioTerms& Terms);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValue_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions, FModioModTagOptions& ModTagOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValue_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo, FModioModProgressInfo& ModProgressInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValue_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList, FModioModInfoList& ModInfoList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValue_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo, FModioModInfo& ModInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValue_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList, FModioModDependencyList& DependencyList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetValue_ModioOptionalImage(const FModioOptionalImage& OptionalImage, FModioImage& Image);
    
};

