#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "FSDEventRewardsSave.generated.h"

USTRUCT(BlueprintType)
struct FFSDEventRewardsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<FGuid> EventsSeen;
    
public:
    FSD_API FFSDEventRewardsSave();
};

