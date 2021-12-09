#pragma once
#include "CoreMinimal.h"
#include "ModioOptionalModDependencyList.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioOptionalModInfo.h"
#include "ModioOptionalUser.h"
#include "ModioOptionalTerms.h"
#include "ModioOptionalImage.h"
#include "ModioOptionalModTagOptions.h"
#include "ModioModInfoList.h"
#include "ModioOptionalModProgressInfo.h"
#include "ModioOptionalModInfoList.h"
#include "ModioUser.h"
#include "ModioTerms.h"
#include "ModioModTagOptions.h"
#include "ModioModProgressInfo.h"
#include "ModioModDependencyList.h"
#include "ModioModInfo.h"
#include "ModioImage.h"
#include "ModioOptionalLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioOptionalLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintPure)
    static bool IsSet_ModioOptionalUser(const FModioOptionalUser& OptionalUser);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet_ModioOptionalImage(const FModioOptionalImage& OptionalImage);
    
    UFUNCTION(BlueprintPure)
    static bool GetValue_ModioOptionalUser(const FModioOptionalUser& OptionalUser, FModioUser& User);
    
    UFUNCTION(BlueprintPure)
    static bool GetValue_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms, FModioTerms& Terms);
    
    UFUNCTION(BlueprintPure)
    static bool GetValue_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions, FModioModTagOptions& ModTagOptions);
    
    UFUNCTION(BlueprintPure)
    static bool GetValue_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo, FModioModProgressInfo& ModProgressInfo);
    
    UFUNCTION(BlueprintPure)
    static bool GetValue_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList, FModioModInfoList& ModInfoList);
    
    UFUNCTION(BlueprintPure)
    static bool GetValue_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo, FModioModInfo& ModInfo);
    
    UFUNCTION(BlueprintPure)
    static bool GetValue_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList, FModioModDependencyList& DependencyList);
    
    UFUNCTION(BlueprintPure)
    static bool GetValue_ModioOptionalImage(const FModioOptionalImage& OptionalImage, FModioImage& Image);
    
public:
    UModioOptionalLibrary();
};

