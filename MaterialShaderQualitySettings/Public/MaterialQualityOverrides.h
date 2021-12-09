#pragma once
#include "CoreMinimal.h"
#include "EMobileCSMQuality.h"
#include "MaterialQualityOverrides.generated.h"

USTRUCT(BlueprintType)
struct FMaterialQualityOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bDiscardQualityDuringCook;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableOverride;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceFullyRough;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceNonMetal;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceDisableLMDirectionality;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceLQReflections;
    
    UPROPERTY(Config, EditAnywhere)
    bool bForceDisablePreintegratedGF;
    
    UPROPERTY(Config, EditAnywhere)
    bool bDisableMaterialNormalCalculation;
    
    UPROPERTY(Config, EditAnywhere)
    EMobileCSMQuality MobileCSMQuality;
    
    MATERIALSHADERQUALITYSETTINGS_API FMaterialQualityOverrides();
};

