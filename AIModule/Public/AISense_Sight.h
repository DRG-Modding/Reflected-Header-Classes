#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AISense_Sight.generated.h"

UCLASS(Config=Game)
class AIMODULE_API UAISense_Sight : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditDefaultsOnly)
    int32 MaxTracesPerTick;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 MinQueriesPerTimeSliceCheck;
    
    UPROPERTY(Config, EditDefaultsOnly)
    double MaxTimeSlicePerTick;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float HighImportanceQueryDistanceThreshold;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float MaxQueryImportance;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float SightLimitQueryImportance;
    
public:
    UAISense_Sight();
};

