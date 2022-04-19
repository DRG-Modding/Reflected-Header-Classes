#pragma once
#include "CoreMinimal.h"
#include "ModioModTagInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString TagGroupName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> TagGroupValues;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleSelection;
    
    FModioModTagInfo();
};

