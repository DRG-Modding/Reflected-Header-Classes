#pragma once
#include "CoreMinimal.h"
#include "ModioUserID.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioReportParams.h"
#include "ModioGameID.h"
#include "EModioReportType.h"
#include "ModioModID.h"
#include "ModioReportLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioReportLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintPure)
    static FModioReportParams MakeReportForUser(FModioUserID User, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
    UFUNCTION(BlueprintPure)
    static FModioReportParams MakeReportForMod(FModioModID Mod, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
    UFUNCTION(BlueprintPure)
    static FModioReportParams MakeReportForGame(FModioGameID Game, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
public:
    UModioReportLibrary();
};

