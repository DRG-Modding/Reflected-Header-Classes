#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AISense_Sight.generated.h"

UCLASS(Blueprintable, Config=Game)
class AIMODULE_API UAISense_Sight : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTracesPerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinQueriesPerTimeSliceCheck;
    
    UPROPERTY(Config, EditAnywhere)
    double MaxTimeSlicePerTick;
    
    UPROPERTY(Config, EditAnywhere)
    float HighImportanceQueryDistanceThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxQueryImportance;
    
    UPROPERTY(Config, EditAnywhere)
    float SightLimitQueryImportance;
    
public:
    UAISense_Sight();
};

