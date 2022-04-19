#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MediaTimeStampInfo.generated.h"

UCLASS(BlueprintType)
class MEDIAASSETS_API UMediaTimeStampInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTimespan Time;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 SequenceIndex;
    
    UMediaTimeStampInfo();
};

