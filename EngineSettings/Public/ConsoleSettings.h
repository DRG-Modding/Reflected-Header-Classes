#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AutoCompleteCommand.h"
#include "ConsoleSettings.generated.h"

UCLASS(DefaultConfig, Config=Input)
class ENGINESETTINGS_API UConsoleSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MaxScrollbackSize;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAutoCompleteCommand> ManualAutoCompleteList;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> AutoCompleteMapPaths;
    
    UPROPERTY(Config, EditAnywhere)
    float BackgroundOpacityPercentage;
    
    UPROPERTY(Config, EditAnywhere)
    bool bOrderTopToBottom;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisplayHelpInAutoComplete;
    
    UPROPERTY(Config, EditAnywhere)
    FColor InputColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor HistoryColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor AutoCompleteCommandColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor AutoCompleteCVarColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor AutoCompleteFadedColor;
    
    UConsoleSettings();
};

