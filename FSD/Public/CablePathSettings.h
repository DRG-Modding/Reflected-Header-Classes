#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=DeepPathFinderPreference -FallbackName=DeepPathFinderPreference
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=DeepPathFinderSize -FallbackName=DeepPathFinderSize
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=DeepPathFinderType -FallbackName=DeepPathFinderType
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNoiseY;
    
    FSD_API FCablePathSettings();
};

