#pragma once
#include "CoreMinimal.h"
#include "SolverCollisionFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct CHAOS_API FSolverCollisionFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FilterEnabled;
    
    UPROPERTY(EditAnywhere)
    float MinMass;
    
    UPROPERTY(EditAnywhere)
    float MinSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinImpulse;
    
    FSolverCollisionFilterSettings();
};

