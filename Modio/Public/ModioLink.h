#pragma once
#include "CoreMinimal.h"
#include "ModioLink.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bRequired;
    
    FModioLink();
};

