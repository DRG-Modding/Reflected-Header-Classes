#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AISense_Sight.generated.h"

UCLASS(Config=Game)
class AIMODULE_API UAISense_Sight : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MaxTracesPerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MinQueriesPerTimeSliceCheck;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    double MaxTimeSlicePerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float HighImportanceQueryDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MaxQueryImportance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SightLimitQueryImportance;
    
public:
    UAISense_Sight();
};

