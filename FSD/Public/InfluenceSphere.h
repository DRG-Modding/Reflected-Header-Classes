#pragma once
#include "CoreMinimal.h"
#include "InfluenceSphere.generated.h"

class UCaveInfluencer;

USTRUCT()
struct FInfluenceSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCaveInfluencer* Influencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSD_API FInfluenceSphere();
};

