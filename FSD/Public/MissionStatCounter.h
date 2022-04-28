#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MissionStatCounter.generated.h"

USTRUCT(BlueprintType)
struct FMissionStatCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MissionStatID;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    FSD_API FMissionStatCounter();
};

