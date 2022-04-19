#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioReportParams.h"
#include "ModioGameID.h"
#include "ModioUserID.h"
#include "EModioReportType.h"
#include "ModioModID.h"
#include "ModioReportLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioReportLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioReportLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioReportParams MakeReportForUser(FModioUserID User, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioReportParams MakeReportForMod(FModioModID Mod, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioReportParams MakeReportForGame(FModioGameID Game, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
};

