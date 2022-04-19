#pragma once
#include "CoreMinimal.h"
#include "ModioModStats.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 PopularityRankPosition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 PopularityRankTotalMods;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 DownloadsTotal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 SubscribersTotal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 RatingTotal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 RatingPositive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 RatingNegative;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 RatingPercentagePositive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RatingWeightedAggregate;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString RatingDisplayText;
    
    FModioModStats();
};

