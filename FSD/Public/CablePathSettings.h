#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=DeepPathFinderPreference -FallbackName=DeepPathFinderPreference
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=DeepPathFinderType -FallbackName=DeepPathFinderType
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=DeepPathFinderSize -FallbackName=DeepPathFinderSize
#include "CablePathSettings.generated.h"

USTRUCT(BlueprintType)
struct FCablePathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderType PathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderSize PathSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderPreference PathPreference;
    
    UPROPERTY(EditAnywhere)
    float MinStepSize;
    
    UPROPERTY(EditAnywhere)
    float MaxStepSize;
    
    UPROPERTY(EditAnywhere)
    float MaxNoiseY;
    
    FSD_API FCablePathSettings();
};

