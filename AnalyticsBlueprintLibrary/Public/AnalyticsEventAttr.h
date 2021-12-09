#pragma once
#include "CoreMinimal.h"
#include "AnalyticsEventAttr.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsEventAttr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    ANALYTICSBLUEPRINTLIBRARY_API FAnalyticsEventAttr();
};

