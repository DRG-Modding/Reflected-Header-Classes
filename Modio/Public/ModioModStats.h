#pragma once
#include "CoreMinimal.h"
#include "ModioModStats.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 PopularityRankPosition;
    
    UPROPERTY(EditAnywhere)
    int64 PopularityRankTotalMods;
    
    UPROPERTY(EditAnywhere)
    int64 DownloadsTotal;
    
    UPROPERTY(EditAnywhere)
    int64 SubscribersTotal;
    
    UPROPERTY(EditAnywhere)
    int64 RatingTotal;
    
    UPROPERTY(EditAnywhere)
    int64 RatingPositive;
    
    UPROPERTY(EditAnywhere)
    int64 RatingNegative;
    
    UPROPERTY(EditAnywhere)
    int64 RatingPercentagePositive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatingWeightedAggregate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RatingDisplayText;
    
    FModioModStats();
};

