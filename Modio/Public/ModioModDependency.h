#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioModDependency.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModDependency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ModName;
    
    FModioModDependency();
};

