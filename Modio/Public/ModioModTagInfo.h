#pragma once
#include "CoreMinimal.h"
#include "ModioModTagInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString TagGroupName;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> TagGroupValues;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllowMultipleSelection;
    
    FModioModTagInfo();
};

