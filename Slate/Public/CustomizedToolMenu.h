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
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TMap<FName, FCustomizedToolMenuEntry> Entries;
    
    UPROPERTY()
    TMap<FName, FCustomizedToolMenuSection> Sections;
    
    UPROPERTY()
    TMap<FName, FCustomizedToolMenuNameArray> EntryOrder;
    
    UPROPERTY()
    TArray<FName> SectionOrder;
    
    FCustomizedToolMenu();
};

