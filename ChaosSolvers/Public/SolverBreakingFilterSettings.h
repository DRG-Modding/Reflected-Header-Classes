#pragma once
#include "CoreMinimal.h"
#include "SolverBreakingFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct CHAOSSOLVERS_API FSolverBreakingFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FilterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinVolume;
    
    FSolverBreakingFilterSettings();
};

