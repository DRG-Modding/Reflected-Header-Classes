#pragma once
#include "CoreMinimal.h"
#include "SolverTrailingFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct CHAOSSOLVERS_API FSolverTrailingFilterSettings {
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
    
    FSolverTrailingFilterSettings();
};

