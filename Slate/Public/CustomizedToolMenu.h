#pragma once
#include "CoreMinimal.h"
#include "CustomizedToolMenuEntry.h"
#include "CustomizedToolMenuSection.h"
#include "CustomizedToolMenuNameArray.h"
#include "CustomizedToolMenu.generated.h"

USTRUCT()
struct SLATE_API FCustomizedToolMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuSection> Sections;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuNameArray> EntryOrder;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FName> SectionOrder;
    
    FCustomizedToolMenu();
};

